	THUMB_FUNC_START sub_080705B4
sub_080705B4: @ 0x080705B4
	push {r4-r6,lr}
	ldr r4, _08070618  @ =gRam
	ldr r1, _0807061C  @ =0x000016D6
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08070670
	ldr r2, _08070620  @ =0x00001727
	add r5, r4, r2
	ldrb r1, [r5]
	mov r0, #12
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r1, _08070624  @ =0x000001FF
	and r1, r1, r0
	cmp r1, #3
	bgt _08070638
	bl sub_080715DC
	cmp r0, #0
	bne _08070670
	ldr r2, _08070628  @ =0x000009AC
	add r6, r4, r2
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070670
	ldr r0, _0807062C  @ =gUnknown_0814CEA8
	ldrb r1, [r5]
	ldrb r0, [r0, #3]
	and r0, r0, r1
	strb r0, [r5]
	ldr r0, _08070630  @ =gUnknown_0814CEAC
	ldr r0, [r0, #12]
	bl _call_via_r0
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070670
	ldr r0, _08070634  @ =0x000009AD
	add r1, r4, r0
	b _0807066C
_08070618:
	.4byte gRam
_0807061C:
	.4byte 0x000016D6
_08070620:
	.4byte 0x00001727
_08070624:
	.4byte 0x000001FF
_08070628:
	.4byte 0x000009AC
_0807062C:
	.4byte gUnknown_0814CEA8
_08070630:
	.4byte gUnknown_0814CEAC
_08070634:
	.4byte 0x000009AD
_08070638:
	ldr r0, _080706D0  @ =0x000001DB
	cmp r1, r0
	ble _08070670
	bl sub_080715DC
	cmp r0, #0
	bne _08070670
	ldr r1, _080706D4  @ =0x000009AC
	add r6, r4, r1
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070670
	ldr r0, _080706D8  @ =gUnknown_0814CEA8
	ldrb r1, [r5]
	ldrb r0, [r0, #2]
	and r0, r0, r1
	strb r0, [r5]
	ldr r0, _080706DC  @ =gUnknown_0814CEAC
	ldr r0, [r0, #8]
	bl _call_via_r0
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070670
	ldr r2, _080706E0  @ =0x000009AD
	add r1, r4, r2
_0807066C:
	mov r0, #2
	strb r0, [r1]
_08070670:
	ldr r4, _080706E4  @ =gRam
	ldr r1, _080706E8  @ =0x000016D7
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08070732
	ldr r2, _080706EC  @ =0x00001727
	add r5, r4, r2
	ldrb r1, [r5]
	mov r0, #3
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	ldr r1, _080706F0  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r1, _080706F4  @ =0x000001FF
	and r1, r1, r0
	cmp r1, #11
	bgt _080706F8
	bl sub_080715DC
	cmp r0, #0
	bne _08070732
	ldr r2, _080706D4  @ =0x000009AC
	add r6, r4, r2
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070732
	ldr r0, _080706D8  @ =gUnknown_0814CEA8
	ldrb r1, [r5]
	ldrb r0, [r0, #1]
	and r0, r0, r1
	strb r0, [r5]
	ldr r0, _080706DC  @ =gUnknown_0814CEAC
	ldr r0, [r0, #4]
	bl _call_via_r0
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070732
	ldr r0, _080706E0  @ =0x000009AD
	add r1, r4, r0
	b _0807072E
_080706D0:
	.4byte 0x000001DB
_080706D4:
	.4byte 0x000009AC
_080706D8:
	.4byte gUnknown_0814CEA8
_080706DC:
	.4byte gUnknown_0814CEAC
_080706E0:
	.4byte 0x000009AD
_080706E4:
	.4byte gRam
_080706E8:
	.4byte 0x000016D7
_080706EC:
	.4byte 0x00001727
_080706F0:
	.4byte 0x000016C4
_080706F4:
	.4byte 0x000001FF
_080706F8:
	mov r0, #244
	lsl r0, r0, #1
	cmp r1, r0
	ble _08070732
	bl sub_080715DC
	cmp r0, #0
	bne _08070732
	ldr r1, _08070738  @ =0x000009AC
	add r6, r4, r1
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070732
	ldr r0, _0807073C  @ =gUnknown_0814CEA8
	ldrb r1, [r5]
	ldrb r0, [r0]
	and r0, r0, r1
	strb r0, [r5]
	ldr r0, _08070740  @ =gUnknown_0814CEAC
	ldr r0, [r0]
	bl _call_via_r0
	ldrb r0, [r6]
	cmp r0, #7
	bne _08070732
	ldr r2, _08070744  @ =0x000009AD
	add r1, r4, r2
_0807072E:
	mov r0, #2
	strb r0, [r1]
_08070732:
	pop {r4-r6}
	pop {r0}
	bx r0
_08070738:
	.4byte 0x000009AC
_0807073C:
	.4byte gUnknown_0814CEA8
_08070740:
	.4byte gUnknown_0814CEAC
_08070744:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080705B4

