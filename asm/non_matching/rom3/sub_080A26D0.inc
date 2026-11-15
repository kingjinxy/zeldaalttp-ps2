	THUMB_FUNC_START sub_080A26D0
sub_080A26D0: @ 0x080A26D0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r3, _080A2768  @ =gRam
	ldr r0, _080A276C  @ =0x000009C6
	add r0, r0, r3
	mov r8, r0
	ldrh r0, [r0]
	ldr r7, _080A2770  @ =gUnknown_02002280
	add r0, r0, r7
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _080A275C
	ldr r1, _080A2774  @ =0x000016D5
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r5, r0, #1
	ldr r1, _080A2778  @ =0x00000B5A
	add r0, r3, r1
	ldrh r0, [r0]
	mov r6, #218
	cmp r0, #2
	bne _080A2706
	mov r6, #217
_080A2706:
	ldr r0, _080A277C  @ =0x000016C4
	add r1, r3, r0
	ldr r0, _080A2780  @ =gUnknown_081681D4
	add r2, r5, #0
	add r2, r2, #8
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, #16
	neg r1, r1
	add r4, r1, #0
	and r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #182
	lsl r1, r1, #5
	add r3, r3, r1
	ldr r1, _080A2784  @ =gUnknown_0816817C
	add r2, r2, r1
	ldrh r1, [r2]
	ldrh r3, [r3]
	add r1, r1, r3
	and r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, #10
	str r2, [sp]
	add r2, r5, #0
	add r3, r6, #0
	bl sub_080D08CC
	mov r0, r8
	ldrh r1, [r0]
	add r1, r1, r7
	ldrb r0, [r1]
	mov r2, #4
	orr r0, r0, r2
	strb r0, [r1]
	mov r0, #123
	bl sub_0809E49C
_080A275C:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080A2768:
	.4byte gRam
_080A276C:
	.4byte 0x000009C6
_080A2770:
	.4byte gUnknown_02002280
_080A2774:
	.4byte 0x000016D5
_080A2778:
	.4byte 0x00000B5A
_080A277C:
	.4byte 0x000016C4
_080A2780:
	.4byte gUnknown_081681D4
_080A2784:
	.4byte gUnknown_0816817C
	THUMB_FUNC_END sub_080A26D0

