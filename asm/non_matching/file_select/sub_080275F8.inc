	THUMB_FUNC_START sub_080275F8
sub_080275F8: @ 0x080275F8
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_08000694
	ldr r0, [r4, #96]
	mov r6, #1
	and r0, r0, r6
	cmp r0, #0
	beq _0802762E
	ldr r5, _08027624  @ =gUnknown_03006A30
	ldr r0, [r5, #40]
	bl 0x08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08027628
	ldr r1, [r5, #40]
	add r0, r4, #0
	bl sub_080003E0
	b _0802762E
	.byte 0x00
	.byte 0x00
_08027624:
	.4byte gUnknown_03006A30
_08027628:
	ldr r0, [r4, #96]
	eor r0, r0, r6
	str r0, [r4, #96]
_0802762E:
	ldr r0, [r4, #96]
	mov r6, #2
	and r0, r0, r6
	cmp r0, #0
	beq _0802765E
	ldr r0, _08027654  @ =gUnknown_03006A30
	add r5, r0, #0
	add r5, r5, #184
	ldr r0, [r5]
	bl 0x08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08027658
	ldr r1, [r5]
	add r0, r4, #0
	bl sub_080003E0
	b _0802765E
_08027654:
	.4byte gUnknown_03006A30
_08027658:
	ldr r0, [r4, #96]
	eor r0, r0, r6
	str r0, [r4, #96]
_0802765E:
	ldr r0, [r4, #96]
	mov r6, #4
	and r0, r0, r6
	cmp r0, #0
	beq _08027692
	ldr r0, _08027688  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl 0x08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802768C
	ldr r1, [r5]
	add r0, r4, #0
	bl sub_080003E0
	b _08027692
	.byte 0x00
	.byte 0x00
_08027688:
	.4byte gUnknown_03006A30
_0802768C:
	ldr r0, [r4, #96]
	eor r0, r0, r6
	str r0, [r4, #96]
_08027692:
	ldr r0, [r4, #96]
	mov r6, #8
	and r0, r0, r6
	cmp r0, #0
	beq _080276C6
	ldr r0, _080276BC  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl 0x08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080276C0
	ldr r1, [r5]
	add r0, r4, #0
	bl sub_080003E0
	b _080276C6
	.byte 0x00
	.byte 0x00
_080276BC:
	.4byte gUnknown_03006A30
_080276C0:
	ldr r0, [r4, #96]
	eor r0, r0, r6
	str r0, [r4, #96]
_080276C6:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080275F8

