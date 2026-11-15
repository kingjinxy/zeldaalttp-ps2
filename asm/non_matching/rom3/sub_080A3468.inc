	THUMB_FUNC_START sub_080A3468
sub_080A3468: @ 0x080A3468
	push {r4,r5,lr}
	ldr r2, _080A3488  @ =gRam
	ldr r1, _080A348C  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A3484
	ldr r1, _080A3490  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3494
_080A3484:
	mov r0, #0
	b _080A3498
_080A3488:
	.4byte gRam
_080A348C:
	.4byte 0x000016E8
_080A3490:
	.4byte 0x000016F8
_080A3494:
	bl sub_080A1ADC
_080A3498:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A358E
	ldr r1, _080A34FC  @ =gRam
	ldr r2, _080A3500  @ =0x000016E8
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080A3504  @ =0x0000172C
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _080A34F4
	ldr r1, _080A3508  @ =0x00001649
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A34F4
	ldr r2, _080A350C  @ =0x00000AA8
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080A34F4
	ldr r0, _080A3510  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080A34F4
	ldr r1, _080A3514  @ =0x0000166A
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A351C
	ldr r2, _080A3518  @ =0x00001663
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #13
	bne _080A351C
_080A34F4:
	mov r0, #64
	bl sub_0809E43C
	b _080A358E
_080A34FC:
	.4byte gRam
_080A3500:
	.4byte 0x000016E8
_080A3504:
	.4byte 0x0000172C
_080A3508:
	.4byte 0x00001649
_080A350C:
	.4byte 0x00000AA8
_080A3510:
	.4byte gSword
_080A3514:
	.4byte 0x0000166A
_080A3518:
	.4byte 0x00001663
_080A351C:
	ldr r1, _080A3594  @ =0x00000E15
	add r0, r4, r1
	ldr r2, _080A3598  @ =0x00000E16
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r5, r2, #0
	orr r5, r5, r0
	ldr r1, _080A359C  @ =0x00000E17
	add r0, r4, r1
	ldrb r0, [r0]
	orr r5, r5, r0
	cmp r5, #0
	bne _080A358E
	mov r0, #1
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A358E
	ldr r2, _080A35A0  @ =0x00001718
	add r1, r4, r2
	mov r0, #10
	strb r0, [r1]
	ldr r0, _080A35A4  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A35A8  @ =0x000016EB
	add r1, r4, r2
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080A35AC  @ =0x000017A6
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #197
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #77
	add r0, r4, r1
	mov r1, #40
	strb r1, [r0]
	add r2, r2, #68
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080A35B0  @ =0x000017F6
	add r0, r4, r1
	strh r5, [r0]
	mov r0, #107
	bl sub_0809E49C
	mov r0, #9
	mov r1, #1
	bl sub_080BEA28
_080A358E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080A3594:
	.4byte 0x00000E15
_080A3598:
	.4byte 0x00000E16
_080A359C:
	.4byte 0x00000E17
_080A35A0:
	.4byte 0x00001718
_080A35A4:
	.4byte 0x00001705
_080A35A8:
	.4byte 0x000016EB
_080A35AC:
	.4byte 0x000017A6
_080A35B0:
	.4byte 0x000017F6
	THUMB_FUNC_END sub_080A3468

