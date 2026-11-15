	THUMB_FUNC_START sub_080DE4C0
sub_080DE4C0: @ 0x080DE4C0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080DE4FC  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080DE564
	ldr r0, _080DE500  @ =gBoots
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DE524
	ldr r0, _080DE504  @ =gIceRod
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DE518
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080DE512
	ldr r0, _080DE508  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bls _080DE50C
	add r0, r4, #0
	mov r1, #52
	b _080DE51C
	.byte 0x00
	.byte 0x00
_080DE4FC:
	.4byte gPendantCount
_080DE500:
	.4byte gBoots
_080DE504:
	.4byte gIceRod
_080DE508:
	.4byte gSword
_080DE50C:
	add r0, r4, #0
	mov r1, #51
	b _080DE51C
_080DE512:
	add r0, r4, #0
	mov r1, #55
	b _080DE51C
_080DE518:
	add r0, r4, #0
	mov r1, #58
_080DE51C:
	mov r2, sp
	bl sub_080C9164
	b _080DE582
_080DE524:
	ldr r2, _080DE558  @ =gUnknown_08176428
	ldr r5, _080DE55C  @ =gRam
	mov r1, #179
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r0, [r0]
	mov r1, #0
	cmp r0, #2
	bls _080DE538
	mov r1, #2
_080DE538:
	add r0, r1, r2
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DE582
	ldr r0, _080DE560  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #2
	b _080DE580
	.byte 0x00
	.byte 0x00
_080DE558:
	.4byte gUnknown_08176428
_080DE55C:
	.4byte gRam
_080DE560:
	.4byte 0x00000F52
_080DE564:
	add r0, r4, #0
	mov r1, #53
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DE582
	ldr r1, _080DE590  @ =gRam
	ldr r0, _080DE594  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
_080DE580:
	strb r0, [r1]
_080DE582:
	add r0, r4, #0
	bl sub_080DE60C
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DE590:
	.4byte gRam
_080DE594:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE4C0

