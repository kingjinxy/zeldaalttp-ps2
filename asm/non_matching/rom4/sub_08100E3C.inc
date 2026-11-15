	THUMB_FUNC_START sub_08100E3C
sub_08100E3C: @ 0x08100E3C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _08100EC0  @ =gRam
	ldr r1, _08100EC4  @ =0x00001042
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08100EB2
	ldr r1, _08100EC8  @ =gUnknown_0817AE31
	ldr r2, _08100ECC  @ =0x000016C4
	add r0, r5, r2
	ldrb r0, [r0]
	mov r7, #7
	mov r12, r7
	lsr r0, r0, #5
	add r0, r0, r1
	ldrb r4, [r0]
	ldr r1, _08100ED0  @ =0x00000FB2
	add r0, r5, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #3
	bne _08100E76
	mvn r0, r4
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_08100E76:
	ldr r2, _08100ED4  @ =0x00000961
	add r0, r5, r2
	strb r4, [r0]
	ldrb r0, [r1]
	sub r0, r0, #2
	lsl r0, r0, #3
	mov r7, #150
	lsl r7, r7, #4
	add r1, r5, r7
	strb r0, [r1]
	ldr r0, _08100ED8  @ =0x00001082
	add r2, r5, r0
	add r2, r6, r2
	ldr r3, _08100EDC  @ =gUnknown_0817AE21
	ldr r7, _08100EE0  @ =0x00000DA5
	add r0, r5, r7
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r5, r12
	and r0, r0, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	add r0, r0, r4
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2]
_08100EB2:
	add r0, r6, #0
	bl sub_081016C8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08100EC0:
	.4byte gRam
_08100EC4:
	.4byte 0x00001042
_08100EC8:
	.4byte gUnknown_0817AE31
_08100ECC:
	.4byte 0x000016C4
_08100ED0:
	.4byte 0x00000FB2
_08100ED4:
	.4byte 0x00000961
_08100ED8:
	.4byte 0x00001082
_08100EDC:
	.4byte gUnknown_0817AE21
_08100EE0:
	.4byte 0x00000DA5
	THUMB_FUNC_END sub_08100E3C

