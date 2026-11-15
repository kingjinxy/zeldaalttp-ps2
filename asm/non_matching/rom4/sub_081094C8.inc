	THUMB_FUNC_START sub_081094C8
sub_081094C8: @ 0x081094C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _08109514  @ =gRam
	ldr r1, _08109518  @ =0x00001022
	add r0, r3, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #160
	bhi _081094E2
	mov r0, #160
	strb r0, [r1]
_081094E2:
	ldr r1, _0810951C  @ =0x00000D18
	add r0, r3, r1
	mov r1, #40
	strb r1, [r0]
	ldr r1, _08109520  @ =0x00000FC2
	add r0, r3, r1
	add r4, r2, r0
	ldrb r1, [r4]
	add r0, r1, #0
	cmp r0, #0
	beq _08109524
	cmp r0, #191
	bhi _0810950A
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0810950A
	add r0, r2, #0
	bl sub_0810A33C
_0810950A:
	add r0, r5, #0
	bl sub_0810A538
	b _08109532
	.byte 0x00
	.byte 0x00
_08109514:
	.4byte gRam
_08109518:
	.4byte 0x00001022
_0810951C:
	.4byte 0x00000D18
_08109520:
	.4byte 0x00000FC2
_08109524:
	ldr r1, _08109538  @ =0x00000F52
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
	mov r0, #255
	strb r0, [r4]
_08109532:
	pop {r4,r5}
	pop {r0}
	bx r0
_08109538:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081094C8

