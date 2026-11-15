	THUMB_FUNC_START sub_08000580
sub_08000580: @ 0x08000580
	push {r4-r6,lr}
	add r4, r0, #0
	mov r5, #0
	ldr r6, _08000790  @ =gUnknown_03006A58
	ldr r1, [r6]
	cmp r1, #0
	beq _0800059E
	ldrh r2, [r1, #58]
	cmp r2, #0
	bne _0800059E
	bl sub_08000358
	cmp r0, #0
	beq _0800059E
	add r5, r5, #1
_0800059E:
	add r6, r6, #144
	ldr r1, [r6]
	cmp r1, #0
	beq _080005B8
	ldrh r2, [r1, #58]
	cmp r2, #0
	bne _080005B8
	add r0, r4, #0
	bl sub_08000358
	cmp r0, #0
	beq _080005B8
	add r5, r5, #2
_080005B8:
	add r6, r6, #144
	ldr r1, [r6]
	cmp r1, #0
	beq _080005D2
	ldrh r2, [r1, #58]
	cmp r2, #0
	bne _080005D2
	add r0, r4, #0
	bl sub_08000358
	cmp r0, #0
	beq _080005D2
	add r5, r5, #4
_080005D2:
	add r6, r6, #144
	ldr r1, [r6]
	cmp r1, #0
	beq _080005EC
	ldrh r2, [r1, #58]
	cmp r2, #0
	bne _080005EC
	add r0, r4, #0
	bl sub_08000358
	cmp r0, #0
	beq _080005EC
	add r5, r5, #8
_080005EC:
	add r0, r5, #0
	pop {r4-r6,pc}

