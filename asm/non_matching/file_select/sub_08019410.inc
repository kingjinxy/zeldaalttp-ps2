	THUMB_FUNC_START sub_08019410
sub_08019410: @ 0x08019410
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r4, r5, #0
	add r4, r4, #42
	ldrb r0, [r4]
	cmp r0, #1
	bne _08019468
	add r0, r5, #0
	bl 0x08003828
	mov r1, #128
	lsl r1, r1, #6
	add r0, r5, #0
	bl 0x08003F1C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _0801943C
	b _080195FC
_0801943C:
	cmp r0, #0
	bne _08019460
	mov r0, #2
	strb r0, [r4]
	ldr r3, [r5, #120]
	ldrb r2, [r3, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r4, #1
	orr r0, r0, r4
	strb r0, [r3, #28]
	ldr r2, [r5, #124]
	ldrb r0, [r2, #28]
	and r1, r1, r0
	orr r1, r1, r4
	strb r1, [r2, #28]
_08019460:
	mov r0, #84
	bl 0x08003DFC
	b _080195FC
_08019468:
	add r0, r5, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #1
	mov r8, r0
	and r0, r0, r1
	cmp r0, #0
	bne _08019498
	add r0, r5, #0
	mov r1, #2
	bl 0x08003870
	add r0, r5, #0
	bl 0x08003B94
	ldrb r2, [r5, #29]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #2
	orr r1, r1, r0
	sub r0, r0, #6
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r5, #29]
_08019498:
	add r4, r5, #0
	add r4, r4, #46
	mov r6, #0
	mov r0, #6
	strb r0, [r4]
	add r0, r5, #0
	add r0, r0, #117
	ldrb r1, [r0]
	add r7, r0, #0
	cmp r1, #0
	beq _080194E0
	add r0, r5, #0
	bl sub_08019690
	ldr r0, [r5, #124]
	ldr r1, [r5, #120]
	ldrh r0, [r0, #50]
	ldrh r1, [r1, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r1, r0, #16
	cmp r1, #0
	beq _080194C8
	strb r6, [r4]
_080194C8:
	add r0, r5, #0
	add r0, r0, #113
	ldrb r0, [r0]
	add r4, r5, #0
	add r4, r4, #69
	cmp r0, r1
	bgt _0801952C
	strb r6, [r4]
	mov r0, #86
	bl 0x08003DFC
	b _0801952C
_080194E0:
	add r1, r5, #0
	add r1, r1, #118
	ldrh r0, [r1]
	sub r2, r0, #1
	strh r2, [r1]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _08019510
	ldrb r0, [r5, #20]
	sub r0, r0, #1
	strb r0, [r5, #20]
	mov r1, r8
	strb r1, [r5, #23]
	add r1, r5, #0
	add r1, r1, #70
	mov r0, #12
	strb r0, [r1]
	mov r0, #150
	bl 0x08003DFC
	add r4, r5, #0
	add r4, r4, #69
	b _0801952C
_08019510:
	add r4, r5, #0
	add r4, r4, #69
	cmp r0, #60
	bhi _0801952C
	ldr r0, _08019558  @ =gUnknown_0813999C
	mov r1, #3
	and r2, r2, r1
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r5, #50]
	add r0, r0, r1
	strh r0, [r5, #50]
_0801952C:
	ldrb r6, [r4]
	cmp r6, #0
	beq _080195B8
	ldr r0, [r5, #124]
	ldr r1, [r5, #120]
	ldrh r0, [r0, #50]
	ldrh r1, [r1, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r0, #0
	beq _0801955C
	ldr r2, [r5, #88]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	strb r3, [r5, #23]
	b _08019568
_08019558:
	.4byte gUnknown_0813999C
_0801955C:
	ldr r2, [r5, #88]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2, #28]
_08019568:
	ldr r0, _080195B0  @ =gUnknown_03000488
	ldr r4, _080195B4  @ =gUnknown_081399B0
	lsl r1, r3, #16
	asr r1, r1, #16
	lsl r2, r1, #1
	lsl r1, r1, #2
	add r1, r1, r4
	ldrh r1, [r1]
	mov r3, #0
	strh r1, [r0]
	add r2, r2, #1
	lsl r2, r2, #1
	add r2, r2, r4
	ldrh r1, [r2]
	strh r1, [r0, #2]
	strh r3, [r0, #4]
	add r1, r5, #0
	bl sub_0803D770
	ldrb r1, [r7]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	bne _0801959E
	ldr r0, [r5, #120]
	bl 0x080077D0
_0801959E:
	ldrb r1, [r7]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #0
	bne _080195FC
	ldr r0, [r5, #124]
	bl 0x080077D0
	b _080195FC
_080195B0:
	.4byte gUnknown_03000488
_080195B4:
	.4byte gUnknown_081399B0
_080195B8:
	ldrb r1, [r7]
	mov r4, #3
	mov r0, #3
	and r0, r0, r1
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	ldr r3, _08019608  @ =gUnknown_03006A30
	add r5, r1, r3
	strb r6, [r5, #5]
	ldr r0, [r5, #40]
	add r0, r0, #62
	mov r1, #24
	strb r1, [r0]
	ldr r0, [r5, #40]
	ldr r1, _0801960C  @ =gUnknown_081399A8
	ldrb r2, [r1, #1]
	add r0, r0, #66
	strb r2, [r0]
	ldrb r1, [r7]
	lsr r1, r1, #4
	and r1, r1, r4
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r5, r0, r3
	strb r6, [r5, #5]
	ldr r0, [r5, #40]
	add r0, r0, #62
	mov r1, #8
	strb r1, [r0]
	ldr r0, [r5, #40]
	add r0, r0, #66
	strb r2, [r0]
_080195FC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08019608:
	.4byte gUnknown_03006A30
_0801960C:
	.4byte gUnknown_081399A8
	THUMB_FUNC_END sub_08019410

