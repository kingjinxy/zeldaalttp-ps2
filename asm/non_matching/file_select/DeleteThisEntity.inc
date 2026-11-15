	THUMB_FUNC_START DeleteThisEntity
DeleteThisEntity: @ 0x08012540
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #4]
	cmp r0, #0
	bne _0801254C
	b _080126B2
_0801254C:
	add r0, r4, #0
	add r0, r0, #83
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801255C
	add r0, r4, #0
	bl sub_0802C0EC
_0801255C:
	ldrb r0, [r4, #8]
	cmp r0, #4
	beq _08012608
	cmp r0, #4
	bgt _0801256C
	cmp r0, #3
	beq _08012572
	b _0801265A
_0801256C:
	cmp r0, #6
	beq _080125C8
	b _0801265A
_08012572:
	ldr r0, [r4, #96]
	cmp r0, #0
	beq _080125A2
	add r0, r0, #98
	ldrh r1, [r0]
	sub r1, r1, #1
	strh r1, [r0]
	add r1, r4, #0
	add r1, r1, #104
	ldrb r0, [r1]
	cmp r0, #0
	beq _080125A2
	ldr r2, [r4, #96]
	add r2, r2, #100
	ldr r3, _080125B8  @ =gUnknown_08137B10
	sub r0, r0, #1
	mov r1, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r3
	ldr r1, [r0]
	ldrh r0, [r2]
	bic r0, r0, r1
	strh r0, [r2]
_080125A2:
	ldrb r0, [r4, #9]
	lsl r0, r0, #4
	ldr r1, _080125BC  @ =gUnknown_08138C20
	add r2, r0, r1
	ldrh r1, [r2]
	ldr r0, _080125C0  @ =0x0000FFFF
	cmp r1, r0
	bne _08012628
	ldr r0, _080125C4  @ =gUnknown_081390E0
	b _0801261A
	.byte 0x00
	.byte 0x00
_080125B8:
	.4byte gUnknown_08137B10
_080125BC:
	.4byte gUnknown_08138C20
_080125C0:
	.4byte 0x0000FFFF
_080125C4:
	.4byte gUnknown_081390E0
_080125C8:
	ldrb r1, [r4, #9]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _080125F0  @ =gUnknown_0813C72C
	add r2, r0, r1
	ldrh r1, [r2]
	ldr r0, _080125F4  @ =0x0000FFFF
	cmp r1, r0
	bne _080125FC
	ldr r0, _080125F8  @ =gUnknown_0813CBB4
	ldrh r1, [r2, #2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldrb r2, [r4, #10]
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #1
	b _08012624
	.byte 0x00
	.byte 0x00
_080125F0:
	.4byte gUnknown_0813C72C
_080125F4:
	.4byte 0x0000FFFF
_080125F8:
	.4byte gUnknown_0813CBB4
_080125FC:
	ldr r0, _08012604  @ =0x0000FFFE
	cmp r1, r0
	beq _0801265A
	b _08012628
_08012604:
	.4byte 0x0000FFFE
_08012608:
	ldrb r0, [r4, #9]
	lsl r0, r0, #4
	ldr r1, _0801263C  @ =gUnknown_0813C16C
	add r2, r0, r1
	ldrh r1, [r2]
	ldr r0, _08012640  @ =0x0000FFFF
	cmp r1, r0
	bne _08012648
	ldr r0, _08012644  @ =gUnknown_0813C2EC
_0801261A:
	ldrh r1, [r2, #2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldrb r0, [r4, #10]
	lsl r0, r0, #4
_08012624:
	ldr r1, [r1]
	add r2, r1, r0
_08012628:
	ldrh r1, [r2, #2]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _0801265A
	ldrh r0, [r2, #2]
	bl sub_0802C39C
	b _0801265A
_0801263C:
	.4byte gUnknown_0813C16C
_08012640:
	.4byte 0x0000FFFF
_08012644:
	.4byte gUnknown_0813C2EC
_08012648:
	ldrh r1, [r2, #2]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _0801265A
	ldrh r0, [r2, #2]
	bl sub_0802C39C
_0801265A:
	ldr r1, [r4]
	ldr r0, [r4, #4]
	str r0, [r1, #4]
	ldr r1, [r4, #4]
	ldr r0, [r4]
	str r0, [r1]
	ldr r1, _080126B8  @ =gUnknown_0300044C
	ldr r0, [r1]
	cmp r4, r0
	bne _08012672
	ldr r0, [r4]
	str r0, [r1]
_08012672:
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #60
	mov r0, #0
	strb r0, [r1]
	add r1, r1, #5
	strb r0, [r1]
	add r1, r1, #1
	strb r0, [r1]
	add r1, r1, #3
	strb r0, [r1]
	str r0, [r4, #4]
	ldr r3, _080126BC  @ =gUnknown_0202A370
	ldr r2, _080126C0  @ =gUnknown_0202A8C4
	ldrb r1, [r2]
	add r0, r1, #1
	strb r0, [r2]
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r1, r1, r3
	ldr r0, _080126C4  @ =gEntityList
	sub r0, r4, r0
	lsr r0, r0, #7
	strb r0, [r1]
	ldr r1, _080126C8  @ =gUnknown_03005AD8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080126B2:
	pop {r4}
	pop {r0}
	bx r0
_080126B8:
	.4byte gUnknown_0300044C
_080126BC:
	.4byte gUnknown_0202A370
_080126C0:
	.4byte gUnknown_0202A8C4
_080126C4:
	.4byte gEntityList
_080126C8:
	.4byte gUnknown_03005AD8
	THUMB_FUNC_END DeleteThisEntity

