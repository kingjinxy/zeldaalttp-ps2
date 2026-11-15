	THUMB_FUNC_START sub_080A7830
sub_080A7830: @ 0x080A7830
	push {r4-r6,lr}
	sub sp, sp, #8
	add r6, r0, #0
	str r1, [sp, #4]
	mov r1, #0
	mov r0, sp
	strh r1, [r0]
	ldr r0, _080A7890  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r0, [r1]
	cmp r0, #7
	bls _080A786E
	add r5, r1, #0
	mov r4, sp
_080A7850:
	ldrh r0, [r5]
	sub r0, r0, #8
	strh r0, [r5]
	mov r0, sp
	mov r1, #4
	add r2, r6, #0
	add r3, sp, #4
	bl sub_080AA8EC
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldrh r0, [r5]
	cmp r0, #7
	bhi _080A7850
_080A786E:
	ldr r0, _080A7890  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #4
	bhi _080A7894
	cmp r0, #0
	beq _080A78A0
	add r3, sp, #4
	mov r0, sp
	mov r1, #2
	add r2, r6, #0
	bl sub_080AA8EC
	b _080A78A0
	.byte 0x00
	.byte 0x00
_080A7890:
	.4byte gRam
_080A7894:
	add r3, sp, #4
	mov r0, sp
	mov r1, #4
	add r2, r6, #0
	bl sub_080AA8EC
_080A78A0:
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A7830

