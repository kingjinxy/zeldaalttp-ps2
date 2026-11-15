	THUMB_FUNC_START sub_08033188
sub_08033188: @ 0x08033188
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_08037554
	add r1, r0, #0
	cmp r1, #0
	bne _0803319E
	b _08033346
_0803319E:
	bl sub_08037750
	mov r5, #0
	mov r3, #0
	ldr r0, _08033274  @ =gUnknown_03006C80
	ldrb r1, [r0]
	cmp r5, r1
	bcs _080331F6
	ldr r7, _08033278  @ =gUnknown_03006A58
	mov r9, r7
	mov r4, #0
	ldr r1, _0803327C  @ =gUnknown_02016D60
	mov r8, r1
	ldr r7, _08033280  @ =gUnknown_03000940
	mov r12, r7
	mov r10, r0
	ldr r6, _08033284  @ =gUnknown_03005E10
_080331C0:
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r0, [r0]
	add r0, r0, #69
	mov r1, #40
	strb r1, [r0]
	lsl r1, r3, #1
	add r2, r1, r6
	ldrh r0, [r2]
	orr r5, r5, r0
	mov r7, r8
	ldrb r0, [r7, #1]
	cmp r0, #1
	bls _080331E8
	mov r7, r12
	add r0, r1, r7
	strh r4, [r2]
	strh r4, [r0]
_080331E8:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	mov r0, r10
	ldrb r0, [r0]
	cmp r3, r0
	bcc _080331C0
_080331F6:
	ldr r1, _08033288  @ =gUnknown_03000E20
	ldrh r0, [r1]
	add r0, r0, #1
	mov r7, #0
	strh r0, [r1]
	ldr r0, _0803328C  @ =gUnknown_03006C70
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08015D9C
	bl sub_08008ED8
	bl sub_0803F284
	bl sub_08000434
	bl sub_08000BAC
	bl sub_0802BFC4
	ldr r0, _08033290  @ =gUnknown_03000420
	strb r7, [r0, #2]
	add r0, r5, #0
	bl sub_08033398
	ldr r5, _0803327C  @ =gUnknown_02016D60
	ldrb r0, [r5, #1]
	cmp r0, #2
	bls _080332F8
	ldrb r0, [r5, #2]
	cmp r0, #0
	bne _080332C0
	ldr r2, _08033294  @ =gUnknown_030004A0
	add r6, r2, #0
	add r6, r6, #102
	ldr r0, _08033298  @ =0x00003E50
	strh r0, [r6]
	ldr r0, _0803329C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080332F8
	add r4, r2, #0
	add r4, r4, #104
	ldrh r3, [r4]
	mov r0, #128
	lsl r0, r0, #5
	cmp r3, r0
	beq _080332A0
	mov r1, #255
	and r1, r1, r3
	sub r1, r1, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #16
	sub r0, r0, r1
	lsl r0, r0, #8
	orr r0, r0, r1
	strh r0, [r4]
	b _080332F8
	.byte 0x00
	.byte 0x00
_08033274:
	.4byte gUnknown_03006C80
_08033278:
	.4byte gUnknown_03006A58
_0803327C:
	.4byte gUnknown_02016D60
_08033280:
	.4byte gUnknown_03000940
_08033284:
	.4byte gUnknown_03005E10
_08033288:
	.4byte gUnknown_03000E20
_0803328C:
	.4byte gUnknown_03006C70
_08033290:
	.4byte gUnknown_03000420
_08033294:
	.4byte gUnknown_030004A0
_08033298:
	.4byte 0x00003E50
_0803329C:
	.4byte gUnknown_03000948
_080332A0:
	ldrh r1, [r2]
	ldr r0, _080332B8  @ =0x0000EFFF
	and r0, r0, r1
	strh r0, [r2]
	mov r0, #16
	strh r0, [r4]
	ldr r0, _080332BC  @ =0x00003E56
	strh r0, [r6]
	mov r0, #1
	strb r0, [r5, #2]
	b _080332F8
	.byte 0x00
	.byte 0x00
_080332B8:
	.4byte 0x0000EFFF
_080332BC:
	.4byte 0x00003E56
_080332C0:
	ldr r2, _08033324  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08033328  @ =0x0000EFFF
	and r0, r0, r1
	strh r0, [r2]
	ldr r0, _0803332C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080332F8
	add r3, r2, #0
	add r3, r3, #104
	ldrh r2, [r3]
	mov r0, #128
	lsl r0, r0, #5
	cmp r2, r0
	beq _080332F8
	mov r1, #255
	and r1, r1, r2
	sub r1, r1, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #16
	sub r0, r0, r1
	lsl r0, r0, #8
	orr r0, r0, r1
	strh r0, [r3]
_080332F8:
	ldr r0, _08033330  @ =gUnknown_02016D60
	ldrb r0, [r0]
	cmp r0, #3
	bne _08033340
	ldr r1, _08033334  @ =gUnknown_03006C80
	ldr r0, [r1, #28]
	add r0, r0, #1
	str r0, [r1, #28]
	cmp r0, #60
	bls _08033340
	ldr r1, _08033338  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0803333C  @ =gSubState
	mov r0, #0
	strb r0, [r1]
	mov r0, #1
	mov r1, #2
	bl sub_0800C0B0
	b _08033350
_08033324:
	.4byte gUnknown_030004A0
_08033328:
	.4byte 0x0000EFFF
_0803332C:
	.4byte gUnknown_03000948
_08033330:
	.4byte gUnknown_02016D60
_08033334:
	.4byte gUnknown_03006C80
_08033338:
	.4byte gUnknown_03005050
_0803333C:
	.4byte gSubState
_08033340:
	bl sub_08037574
	b _08033350
_08033346:
	ldr r0, _08033360  @ =gUnknown_03005E10
	strh r1, [r0, #6]
	strh r1, [r0, #4]
	strh r1, [r0, #2]
	strh r1, [r0]
_08033350:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033360:
	.4byte gUnknown_03005E10
	THUMB_FUNC_END sub_08033188

