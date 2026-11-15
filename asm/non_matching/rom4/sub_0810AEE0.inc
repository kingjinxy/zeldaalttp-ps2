	THUMB_FUNC_START sub_0810AEE0
sub_0810AEE0: @ 0x0810AEE0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _0810AF58  @ =gRam
	ldr r1, _0810AF5C  @ =0x00000FC2
	add r0, r7, r1
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810AF4C
	ldr r0, _0810AF60  @ =0x00000F52
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080C36D8
	add r5, r0, #0
	add r0, r6, #0
	bl sub_080C3028
	ldr r1, _0810AF64  @ =0x00000FB2
	add r4, r7, r1
	add r4, r6, r4
	lsl r0, r0, #1
	orr r0, r0, r5
	strb r0, [r4]
	ldr r0, _0810AF68  @ =0x00001122
	add r2, r7, r0
	add r2, r6, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _0810AF6C  @ =gUnknown_0817CAA0
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #12
	mov r0, r8
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C351C
_0810AF4C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AF58:
	.4byte gRam
_0810AF5C:
	.4byte 0x00000FC2
_0810AF60:
	.4byte 0x00000F52
_0810AF64:
	.4byte 0x00000FB2
_0810AF68:
	.4byte 0x00001122
_0810AF6C:
	.4byte gUnknown_0817CAA0
	THUMB_FUNC_END sub_0810AEE0

