	THUMB_FUNC_START sub_080CE5B4
sub_080CE5B4: @ 0x080CE5B4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE60A
	ldr r0, _080CE614  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080CE618  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r3, _080CE61C  @ =0x00000964
	add r2, r4, r3
	ldrh r2, [r2]
	ldr r5, _080CE620  @ =gUnknown_08172DF9
	ldr r7, _080CE624  @ =0x000012FE
	add r3, r4, r7
	add r3, r6, r3
	ldrb r3, [r3]
	lsr r3, r3, #3
	add r3, r3, r5
	ldrb r3, [r3]
	ldr r5, _080CE628  @ =gUnknown_08172DFB
	add r7, r7, #30
	add r4, r4, r7
	add r4, r6, r4
	ldrb r4, [r4]
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
_080CE60A:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE614:
	.4byte gUnknown_03003E74
_080CE618:
	.4byte gRam
_080CE61C:
	.4byte 0x00000964
_080CE620:
	.4byte gUnknown_08172DF9
_080CE624:
	.4byte 0x000012FE
_080CE628:
	.4byte gUnknown_08172DFB
	THUMB_FUNC_END sub_080CE5B4

