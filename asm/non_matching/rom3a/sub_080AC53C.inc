	THUMB_FUNC_START sub_080AC53C
sub_080AC53C: @ 0x080AC53C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080AC578  @ =gRam
	ldr r2, _080AC57C  @ =0x00000E33
	add r0, r1, r2
	add r3, r5, r0
	ldrb r2, [r3]
	add r4, r1, #0
	cmp r2, #0
	bne _080AC588
	mov r0, #3
	strb r0, [r3]
	ldr r3, _080AC580  @ =0x00000E29
	add r1, r4, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080AC588
	ldr r1, _080AC584  @ =0x00000E15
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	b _080AC5D4
	.byte 0x00
	.byte 0x00
_080AC578:
	.4byte gRam
_080AC57C:
	.4byte 0x00000E33
_080AC580:
	.4byte 0x00000E29
_080AC584:
	.4byte 0x00000E15
_080AC588:
	ldr r2, _080AC5DC  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _080AC598
	mov r0, #4
	bl sub_080CF388
_080AC598:
	add r0, r5, #0
	bl sub_080C177C
	ldr r3, _080AC5E0  @ =0x00000E29
	add r0, r4, r3
	add r0, r5, r0
	ldrb r5, [r0]
	ldr r0, _080AC5E4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r2, _080AC5E8  @ =0x00000964
	add r1, r4, r2
	ldrh r1, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	ldrh r2, [r2]
	ldr r3, _080AC5EC  @ =gUnknown_0816E160
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r5, _080AC5F0  @ =0x00001724
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
_080AC5D4:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080AC5DC:
	.4byte 0x000016D5
_080AC5E0:
	.4byte 0x00000E29
_080AC5E4:
	.4byte gUnknown_03003E74
_080AC5E8:
	.4byte 0x00000964
_080AC5EC:
	.4byte gUnknown_0816E160
_080AC5F0:
	.4byte 0x00001724
	THUMB_FUNC_END sub_080AC53C

