	THUMB_FUNC_START sub_0811B278
sub_0811B278: @ 0x0811B278
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080C17A8
	ldr r2, _0811B38C  @ =gRam
	ldr r1, _0811B390  @ =0x00000A92
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r3, _0811B394  @ =0x00000968
	add r0, r2, r3
	strh r1, [r0]
	lsl r1, r1, #16
	cmp r1, #0
	beq _0811B2C8
	ldr r0, _0811B398  @ =0xFFFF0000
	cmp r1, r0
	beq _0811B2C8
	ldr r4, _0811B39C  @ =0x00001813
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811B2C8
	ldr r1, _0811B3A0  @ =0x00000A74
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811B2C8
	ldr r3, _0811B3A4  @ =0x00001723
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	sub r4, r4, #239
	add r1, r2, r4
	mov r0, #48
	strb r0, [r1]
_0811B2C8:
	ldr r3, _0811B38C  @ =gRam
	ldr r0, _0811B394  @ =0x00000968
	add r4, r3, r0
	mov r1, #0
	ldrsh r2, [r4, r1]
	sub r0, r0, #8
	add r1, r3, r0
	ldrh r0, [r1]
	sub r0, r0, r2
	mov r5, #0
	strh r0, [r1]
	ldr r2, _0811B3A8  @ =gUnknown_0817F59E
	ldr r0, _0811B3AC  @ =0x00000E29
	add r1, r3, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r2, [r0]
	ldr r0, _0811B3B0  @ =gUnknown_0817F724
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r2, r0, #24
	lsl r0, r2, #1
	strh r0, [r4]
	ldr r4, _0811B3B4  @ =0x00000974
	add r0, r3, r4
	strb r5, [r0]
	ldr r0, _0811B3B8  @ =0x00000975
	add r4, r3, r0
	mov r0, #2
	strb r0, [r4]
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811B324
	mov r0, #4
	strb r0, [r4]
	ldr r1, _0811B3BC  @ =0x00001832
	add r0, r3, r1
	add r0, r6, r0
	ldrb r1, [r0]
	cmp r1, #31
	bhi _0811B324
	mov r0, #14
	and r0, r0, r1
	strb r0, [r4]
_0811B324:
	add r7, r2, #0
	add r2, r3, #0
	ldr r4, _0811B3AC  @ =0x00000E29
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	mov r4, #151
	lsl r4, r4, #4
	add r1, r2, r4
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811B418
	ldr r1, _0811B3C0  @ =0x00001818
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811B3D4
	ldr r4, _0811B3C4  @ =0x00000FF2
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #146
	beq _0811B360
	add r1, r6, #1
	ldr r4, _0811B3C8  @ =0x0000177A
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r1, r0
	bne _0811B3D4
_0811B360:
	ldr r1, _0811B3CC  @ =0x00001791
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811B384
	ldr r2, _0811B39C  @ =0x00001813
	add r0, r3, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811B3D4
	ldr r4, _0811B3D0  @ =0x000016D5
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811B3D4
_0811B384:
	mov r0, #12
	bl sub_080C1984
	b _0811B418
_0811B38C:
	.4byte gRam
_0811B390:
	.4byte 0x00000A92
_0811B394:
	.4byte 0x00000968
_0811B398:
	.4byte 0xFFFF0000
_0811B39C:
	.4byte 0x00001813
_0811B3A0:
	.4byte 0x00000A74
_0811B3A4:
	.4byte 0x00001723
_0811B3A8:
	.4byte gUnknown_0817F59E
_0811B3AC:
	.4byte 0x00000E29
_0811B3B0:
	.4byte gUnknown_0817F724
_0811B3B4:
	.4byte 0x00000974
_0811B3B8:
	.4byte 0x00000975
_0811B3BC:
	.4byte 0x00001832
_0811B3C0:
	.4byte 0x00001818
_0811B3C4:
	.4byte 0x00000FF2
_0811B3C8:
	.4byte 0x0000177A
_0811B3CC:
	.4byte 0x00001791
_0811B3D0:
	.4byte 0x000016D5
_0811B3D4:
	ldr r2, _0811B4D0  @ =gRam
	ldr r1, _0811B4D4  @ =0x000015F7
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811B418
	ldr r3, _0811B4D8  @ =0x00000E47
	add r0, r2, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811B418
	ldr r4, _0811B4DC  @ =0x00001818
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811B412
	add r1, r6, #1
	ldr r3, _0811B4E0  @ =0x0000177A
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r1, r0
	bne _0811B418
	sub r4, r4, #135
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0811B418
_0811B412:
	ldr r1, _0811B4E4  @ =gUnknown_03003E74
	mov r0, #52
	strh r0, [r1]
_0811B418:
	ldr r4, _0811B4D0  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0811B4E8  @ =0x00000978
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	ldr r3, _0811B4EC  @ =0x00000964
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #8
	add r0, r4, r3
	strb r5, [r0]
	ldr r2, _0811B4F0  @ =gUnknown_0817F72D
	mov r0, #151
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r7, #0
	bl sub_0811B50C
	ldr r1, _0811B4F4  @ =0x00000E29
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811B4CA
	ldr r2, _0811B4F8  @ =0x00000974
	add r1, r4, r2
	strb r5, [r1]
	ldr r3, _0811B4FC  @ =0x00000A92
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bls _0811B47A
	cmp r0, #251
	bhi _0811B47A
	mov r0, #2
	strb r0, [r1]
_0811B47A:
	ldr r2, _0811B4D0  @ =gRam
	ldr r4, _0811B500  @ =0x00001813
	add r0, r2, r4
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0811B4CA
	ldr r0, _0811B4FC  @ =0x00000A92
	add r1, r2, r0
	add r1, r6, r1
	ldr r3, _0811B4E8  @ =0x00000978
	add r0, r2, r3
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, #2
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strh r0, [r1]
	ldr r1, _0811B504  @ =0x0000097C
	add r0, r2, r1
	ldrh r0, [r0]
	sub r0, r0, #8
	sub r3, r3, #20
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _0811B508  @ =0x00001724
	add r0, r2, r4
	ldrb r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _0811B4F8  @ =0x00000974
	add r0, r2, r4
	ldrb r0, [r0]
	bl sub_0811B82C
_0811B4CA:
	pop {r4-r7}
	pop {r0}
	bx r0
_0811B4D0:
	.4byte gRam
_0811B4D4:
	.4byte 0x000015F7
_0811B4D8:
	.4byte 0x00000E47
_0811B4DC:
	.4byte 0x00001818
_0811B4E0:
	.4byte 0x0000177A
_0811B4E4:
	.4byte gUnknown_03003E74
_0811B4E8:
	.4byte 0x00000978
_0811B4EC:
	.4byte 0x00000964
_0811B4F0:
	.4byte gUnknown_0817F72D
_0811B4F4:
	.4byte 0x00000E29
_0811B4F8:
	.4byte 0x00000974
_0811B4FC:
	.4byte 0x00000A92
_0811B500:
	.4byte 0x00001813
_0811B504:
	.4byte 0x0000097C
_0811B508:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811B278

