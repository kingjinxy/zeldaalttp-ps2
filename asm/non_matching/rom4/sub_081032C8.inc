	THUMB_FUNC_START sub_081032C8
sub_081032C8: @ 0x081032C8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _08103360  @ =gRam
	ldr r1, _08103364  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _081032E4
	b _08103470
_081032E4:
	ldr r2, _08103368  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _0810336C  @ =0x00000D94
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C6240
	ldr r2, _08103370  @ =0x00000F52
	add r0, r5, r2
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _08103318
	ldr r1, _08103374  @ =0x00001032
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #16
	eor r1, r1, r2
	strb r1, [r0]
_08103318:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _08103328
	b _081034B0
_08103328:
	ldr r1, _08103378  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _0810342C
	mov r5, #0
	mov r8, r5
	add r0, r4, #0
	bl Sprite3_Move
	ldrb r0, [r7]
	cmp r0, #0
	beq _08103382
	add r0, r4, #0
	bl sub_080C4F98
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810337C
	mov r2, #1
	mov r8, r2
	b _0810337E
_08103360:
	.4byte gRam
_08103364:
	.4byte 0x00000F82
_08103368:
	.4byte 0x00001172
_0810336C:
	.4byte 0x00000D94
_08103370:
	.4byte 0x00000F52
_08103374:
	.4byte 0x00001032
_08103378:
	.4byte 0x00000FC2
_0810337C:
	mov r5, #1
_0810337E:
	cmp r5, #0
	beq _081033DA
_08103382:
	ldr r7, _0810340C  @ =gRam
	ldr r1, _08103410  @ =0x00001142
	add r0, r7, r1
	add r5, r6, r0
	ldrb r4, [r5]
	add r0, r6, #0
	bl sub_080C2C4C
	ldr r2, _08103414  @ =0x00001152
	add r0, r7, r2
	add r2, r6, r0
	ldrb r1, [r2]
	add r0, r1, #0
	add r0, r0, #64
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	bne _081033AA
	sub r0, r1, #3
	strb r0, [r2]
_081033AA:
	ldrb r1, [r5]
	eor r4, r4, r1
	and r4, r4, r3
	cmp r4, #0
	beq _081033DA
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081033DA
	mov r0, #0
	strb r0, [r5]
	ldr r1, _08103418  @ =0x00000F52
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _081033E0
	ldr r2, _0810341C  @ =0x00000FA2
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	add r0, r6, #0
	bl sub_081034C0
_081033DA:
	mov r0, r8
	cmp r0, #0
	beq _081034B0
_081033E0:
	ldr r4, _0810340C  @ =gRam
	ldr r1, _08103420  @ =0x00000FC2
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #15
	strb r1, [r0]
	ldr r2, _08103424  @ =0x00001122
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #114
	bl sub_080CF0AC
	ldr r0, _08103428  @ =0x00000F92
	add r4, r4, r0
	add r4, r6, r4
	mov r0, #3
	strb r0, [r4]
	b _081034B0
	.byte 0x00
	.byte 0x00
_0810340C:
	.4byte gRam
_08103410:
	.4byte 0x00001142
_08103414:
	.4byte 0x00001152
_08103418:
	.4byte 0x00000F52
_0810341C:
	.4byte 0x00000FA2
_08103420:
	.4byte 0x00000FC2
_08103424:
	.4byte 0x00001122
_08103428:
	.4byte 0x00000F92
_0810342C:
	cmp r1, #1
	beq _08103444
	ldr r2, _08103440  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	lsr r0, r0, #27
	add r0, r0, #2
	strb r0, [r1]
	b _081034B0
	.byte 0x00
	.byte 0x00
_08103440:
	.4byte 0x00000F92
_08103444:
	ldr r1, _08103468  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r0, _0810346C  @ =gMagicMeter
	ldrb r0, [r0]
	cmp r0, #7
	bhi _081034B0
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	cmp r1, #0
	bne _081034B0
	add r0, r4, #0
	bl sub_0810364C
	b _081034B0
_08103468:
	.4byte 0x00000FA2
_0810346C:
	.4byte gMagicMeter
_08103470:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _081034B0
	ldr r2, _081034A4  @ =0x00000FA4
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #8
	bhi _0810349C
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #8
	bhi _0810349C
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #8
	bls _081034A8
_0810349C:
	add r0, r6, #0
	bl sub_08103598
	b _081034B0
_081034A4:
	.4byte 0x00000FA4
_081034A8:
	ldr r2, _081034BC  @ =0x00000FA2
	add r0, r5, r2
	add r0, r6, r0
	strb r1, [r0]
_081034B0:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081034BC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_081032C8

