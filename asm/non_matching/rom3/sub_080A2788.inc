	THUMB_FUNC_START sub_080A2788
sub_080A2788: @ 0x080A2788
	push {r4,r5,lr}
	ldr r2, _080A27B4  @ =gRam
	ldr r1, _080A27B8  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2804
	ldr r3, _080A27BC  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A27A6
	b _080A2948
_080A27A6:
	ldr r1, _080A27C0  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A27C4
	mov r0, #0
	b _080A27C8
_080A27B4:
	.4byte gRam
_080A27B8:
	.4byte 0x000016E8
_080A27BC:
	.4byte 0x0000172C
_080A27C0:
	.4byte 0x000016F8
_080A27C4:
	bl sub_080A1ADC
_080A27C8:
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A27D0
	b _080A2948
_080A27D0:
	ldr r1, _080A2894  @ =gRam
	ldr r0, _080A2898  @ =gUnknown_081690D6
	ldrb r2, [r0]
	ldr r3, _080A289C  @ =0x000016EB
	add r0, r1, r3
	mov r4, #0
	strb r2, [r0]
	ldr r2, _080A28A0  @ =0x00001796
	add r0, r1, r2
	strb r4, [r0]
	add r3, r3, #158
	add r0, r1, r3
	strb r4, [r0]
	ldr r0, _080A28A4  @ =0x0000180C
	add r3, r1, r0
	mov r2, #1
	mov r0, #1
	strb r0, [r3]
	ldr r0, _080A28A8  @ =0x00001705
	add r3, r1, r0
	ldrb r0, [r3]
	orr r2, r2, r0
	strb r2, [r3]
	ldr r2, _080A28AC  @ =0x000016D4
	add r1, r1, r2
	strb r4, [r1]
_080A2804:
	bl sub_080A38AC
	ldr r4, _080A2894  @ =gRam
	ldr r3, _080A28B0  @ =0x00001727
	add r2, r4, r3
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080A289C  @ =0x000016EB
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080A2828
	b _080A2948
_080A2828:
	ldr r2, _080A28A0  @ =0x00001796
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080A2898  @ =gUnknown_081690D6
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r2, _080A28B4  @ =gUnknown_081690DC
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r3, _080A28B8  @ =0x00001789
	add r0, r4, r3
	strb r1, [r0]
	cmp r1, #1
	bne _080A2914
	mov r0, #2
	bl sub_0809EEB4
	ldr r0, _080A28BC  @ =0x00000B5A
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #1
	bne _080A286C
	mov r0, #123
	bl sub_0809E49C
	mov r0, #0
	mov r1, #54
	bl sub_0812191C
_080A286C:
	ldr r1, _080A28C0  @ =0x000017E8
	add r0, r4, r1
	ldr r2, _080A28C4  @ =0x000017EC
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080A28C8
	mov r0, #0
	mov r1, #22
	bl sub_080ADA94
	mov r0, #113
	bl sub_0809E43C
	b _080A2914
	.byte 0x00
	.byte 0x00
_080A2894:
	.4byte gRam
_080A2898:
	.4byte gUnknown_081690D6
_080A289C:
	.4byte 0x000016EB
_080A28A0:
	.4byte 0x00001796
_080A28A4:
	.4byte 0x0000180C
_080A28A8:
	.4byte 0x00001705
_080A28AC:
	.4byte 0x000016D4
_080A28B0:
	.4byte 0x00001727
_080A28B4:
	.4byte gUnknown_081690DC
_080A28B8:
	.4byte 0x00001789
_080A28BC:
	.4byte 0x00000B5A
_080A28C0:
	.4byte 0x000017E8
_080A28C4:
	.4byte 0x000017EC
_080A28C8:
	mov r0, #0
	mov r1, #23
	bl sub_080AE68C
	mov r0, #15
	mov r1, #1
	bl sub_080BEA28
	ldrh r0, [r5]
	cmp r0, #1
	bls _080A28E4
	bl sub_080A26D0
	b _080A290E
_080A28E4:
	ldr r3, _080A28F4  @ =0x00001894
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A28F8
	bl sub_080A262C
	b _080A290E
_080A28F4:
	.4byte 0x00001894
_080A28F8:
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	cmp r1, #5
	bhi _080A290E
	ldr r0, _080A2950  @ =gUnknown_081690D0
	add r0, r1, r0
	ldrb r0, [r0]
	bl sub_080A24E0
_080A290E:
	mov r0, #36
	bl sub_0809E43C
_080A2914:
	ldr r4, _080A2954  @ =gRam
	ldr r0, _080A2958  @ =0x00001796
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #3
	bne _080A2948
	mov r2, #0
	strb r2, [r1]
	ldr r1, _080A295C  @ =0x00001789
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _080A2960  @ =0x000016E8
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	strb r0, [r3]
	ldr r1, _080A2964  @ =0x0000180C
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _080A2968  @ =0x00001705
	add r2, r4, r3
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A2948:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A2950:
	.4byte gUnknown_081690D0
_080A2954:
	.4byte gRam
_080A2958:
	.4byte 0x00001796
_080A295C:
	.4byte 0x00001789
_080A2960:
	.4byte 0x000016E8
_080A2964:
	.4byte 0x0000180C
_080A2968:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A2788

