	THUMB_FUNC_START sub_080132B0
sub_080132B0: @ 0x080132B0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r5, _080132E0  @ =gUnknown_03006C80
	ldrb r0, [r5, #2]
	add r4, r5, #0
	cmp r0, #0
	beq _08013338
	add r0, r4, #0
	add r0, r0, #79
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _08013304
	ldrb r0, [r4]
	cmp r0, #1
	bls _080132E4
	sub r0, r0, #2
	lsl r0, r0, #27
	lsr r3, r0, #24
	b _080132E6
_080132E0:
	.4byte gUnknown_03006C80
_080132E4:
	mov r3, #0
_080132E6:
	ldr r2, _08013300  @ =gUnknown_0842B8A8
	add r0, r4, #0
	add r0, r0, #79
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	add r0, r3, r0
	lsl r0, r0, #3
	add r0, r0, #8
	ldr r1, [r2, #20]
	add r4, r1, r0
	b _080133B2
	.byte 0x00
	.byte 0x00
_08013300:
	.4byte gUnknown_0842B8A8
_08013304:
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _0801332C
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0801332C
	ldr r0, _08013328  @ =gUnknown_0842B8A8
	ldrb r1, [r4]
	lsl r1, r1, #1
	sub r1, r1, #5
	ldrb r4, [r4, #4]
	add r1, r1, r4
	lsl r1, r1, #3
	ldr r0, [r0, #16]
	add r4, r0, r1
	b _080133B2
_08013328:
	.4byte gUnknown_0842B8A8
_0801332C:
	ldr r0, _08013334  @ =gUnknown_0842B8A8
	ldr r4, [r0, #20]
	b _080133B2
	.byte 0x00
	.byte 0x00
_08013334:
	.4byte gUnknown_0842B8A8
_08013338:
	ldrb r0, [r4, #5]
	cmp r0, #0
	beq _08013350
	ldr r1, _0801334C  @ =gUnknown_0842AD08
	ldrb r0, [r4, #1]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	b _080133B2
	.byte 0x00
	.byte 0x00
_0801334C:
	.4byte gUnknown_0842AD08
_08013350:
	bl sub_080131C8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r0, _080133C4  @ =gUnknown_0842B8A8
	mov r10, r0
	ldr r2, _080133C8  @ =gUnknown_0202A720
	mov r8, r2
	add r6, r5, #0
	add r5, r5, #73
	mov r7, r8
_08013368:
	ldr r1, _080133CC  @ =gUnknown_0842B8C0
	ldrb r0, [r6, #1]
	lsl r0, r0, #1
	add r2, r0, r1
	mov r3, #63
_08013372:
	ldrb r0, [r5]
	add r0, r0, #1
	and r0, r0, r3
	strb r0, [r5]
	ldrb r1, [r5]
	add r0, r1, r7
	ldrb r0, [r0]
	ldrh r4, [r2]
	cmp r0, r4
	bcs _08013372
	mov r2, r8
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r6, #0
	add r2, r2, #72
	strb r0, [r2]
	ldrb r1, [r6, #1]
	lsl r1, r1, #2
	add r1, r1, r10
	ldrb r0, [r2]
	lsl r0, r0, #3
	ldr r1, [r1]
	add r4, r1, r0
	ldr r0, [r4, #4]
	lsr r0, r0, #30
	cmp r0, r9
	bne _08013368
	add r0, r4, #0
	bl sub_080130D4
	cmp r0, #0
	beq _08013368
_080133B2:
	add r0, r4, #0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080133C4:
	.4byte gUnknown_0842B8A8
_080133C8:
	.4byte gUnknown_0202A720
_080133CC:
	.4byte gUnknown_0842B8C0
	THUMB_FUNC_END sub_080132B0

