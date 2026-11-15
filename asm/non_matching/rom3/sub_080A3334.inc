	THUMB_FUNC_START sub_080A3334
sub_080A3334: @ 0x080A3334
	push {r4,r5,lr}
	ldr r2, _080A3354  @ =gRam
	ldr r1, _080A3358  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A3350
	ldr r1, _080A335C  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3360
_080A3350:
	mov r0, #0
	b _080A3364
_080A3354:
	.4byte gRam
_080A3358:
	.4byte 0x000016E8
_080A335C:
	.4byte 0x000016F8
_080A3360:
	bl sub_080A1ADC
_080A3364:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A3446
	ldr r1, _080A33C8  @ =gRam
	ldr r2, _080A33CC  @ =0x000016E8
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080A33D0  @ =0x0000172C
	add r0, r1, r2
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	bne _080A33C0
	ldr r1, _080A33D4  @ =0x00001649
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A33C0
	ldr r2, _080A33D8  @ =0x00000AA8
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080A33C0
	ldr r0, _080A33DC  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080A33C0
	ldr r1, _080A33E0  @ =0x0000166A
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A33E8
	ldr r2, _080A33E4  @ =0x00001663
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #13
	bne _080A33E8
_080A33C0:
	mov r0, #64
	bl sub_0809E43C
	b _080A3446
_080A33C8:
	.4byte gRam
_080A33CC:
	.4byte 0x000016E8
_080A33D0:
	.4byte 0x0000172C
_080A33D4:
	.4byte 0x00001649
_080A33D8:
	.4byte 0x00000AA8
_080A33DC:
	.4byte gSword
_080A33E0:
	.4byte 0x0000166A
_080A33E4:
	.4byte 0x00001663
_080A33E8:
	ldr r1, _080A344C  @ =0x00000E15
	add r0, r5, r1
	ldr r2, _080A3450  @ =0x00000E16
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r2, #0
	orr r4, r4, r0
	ldr r1, _080A3454  @ =0x00000E17
	add r0, r5, r1
	ldrb r0, [r0]
	orr r4, r4, r0
	cmp r4, #0
	bne _080A3446
	mov r0, #1
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A3446
	ldr r2, _080A3458  @ =0x00001718
	add r1, r5, r2
	mov r0, #9
	strb r0, [r1]
	ldr r0, _080A345C  @ =0x00001705
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A3460  @ =0x000016EB
	add r1, r5, r2
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080A3464  @ =0x000017A6
	add r0, r5, r1
	strh r4, [r0]
	add r2, r2, #197
	add r0, r5, r2
	strh r4, [r0]
	mov r0, #107
	bl sub_0809E49C
	mov r0, #7
	mov r1, #1
	bl sub_080BEA28
_080A3446:
	pop {r4,r5}
	pop {r0}
	bx r0
_080A344C:
	.4byte 0x00000E15
_080A3450:
	.4byte 0x00000E16
_080A3454:
	.4byte 0x00000E17
_080A3458:
	.4byte 0x00001718
_080A345C:
	.4byte 0x00001705
_080A3460:
	.4byte 0x000016EB
_080A3464:
	.4byte 0x000017A6
	THUMB_FUNC_END sub_080A3334

