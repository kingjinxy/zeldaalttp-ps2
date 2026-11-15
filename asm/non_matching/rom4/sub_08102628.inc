	THUMB_FUNC_START sub_08102628
sub_08102628: @ 0x08102628
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _08102698  @ =gRam
	ldr r1, _0810269C  @ =0x00001132
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #9
	strb r1, [r0]
	ldr r2, _081026A0  @ =0x00001172
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	ldr r0, _081026A4  @ =0x00001012
	add r4, r7, r0
	add r4, r6, r4
	ldrb r5, [r4]
	mov r1, #128
	add r0, r5, #0
	orr r0, r0, r1
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	strb r5, [r4]
	cmp r0, #0
	beq _08102690
	ldr r1, _081026A8  @ =0x00001142
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #144
	strb r1, [r0]
	ldr r2, _081026AC  @ =0x00000F52
	add r1, r7, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081026B0  @ =0x00001082
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	add r2, r2, #64
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #108
	bl sub_080CF0AC
_08102690:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102698:
	.4byte gRam
_0810269C:
	.4byte 0x00001132
_081026A0:
	.4byte 0x00001172
_081026A4:
	.4byte 0x00001012
_081026A8:
	.4byte 0x00001142
_081026AC:
	.4byte 0x00000F52
_081026B0:
	.4byte 0x00001082
	THUMB_FUNC_END sub_08102628

