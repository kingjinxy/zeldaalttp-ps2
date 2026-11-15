	THUMB_FUNC_START sub_080CD724
sub_080CD724: @ 0x080CD724
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080CD742
	b _080CD89C
_080CD742:
	ldr r5, _080CD774  @ =gRam
	ldr r1, _080CD778  @ =0x000013EE
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080CD77C  @ =0x00000969
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080CD780  @ =0x00001610
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #2
	bls _080CD75E
	b _080CD89C
_080CD75E:
	ldr r1, _080CD784  @ =0x0000131C
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #3
	bne _080CD788
	add r0, r4, #0
	bl sub_080CD96C
	b _080CD89C
	.byte 0x00
	.byte 0x00
_080CD774:
	.4byte gRam
_080CD778:
	.4byte 0x000013EE
_080CD77C:
	.4byte 0x00000969
_080CD780:
	.4byte 0x00001610
_080CD784:
	.4byte 0x0000131C
_080CD788:
	ldr r3, _080CD7B0  @ =0x000015F9
	add r0, r5, r3
	strb r1, [r0]
	ldrb r1, [r2]
	ldr r2, _080CD7B4  @ =0x000012FE
	add r0, r5, r2
	add r0, r6, r0
	ldrb r3, [r0]
	lsr r3, r3, #2
	mov r0, #7
	eor r3, r3, r0
	lsl r3, r3, #2
	cmp r1, #4
	beq _080CD7BE
	cmp r1, #4
	bgt _080CD7B8
	cmp r1, #2
	beq _080CD7C4
	b _080CD7E4
	.byte 0x00
	.byte 0x00
_080CD7B0:
	.4byte 0x000015F9
_080CD7B4:
	.4byte 0x000012FE
_080CD7B8:
	cmp r1, #16
	beq _080CD7DC
	b _080CD7E4
_080CD7BE:
	add r0, r3, #0
	add r0, r0, #32
	b _080CD7E0
_080CD7C4:
	ldr r1, _080CD7D8  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080CD7E4
	add r0, r3, #0
	add r0, r0, #32
	b _080CD7E0
_080CD7D8:
	.4byte 0x000009B2
_080CD7DC:
	add r0, r3, #0
	add r0, r0, #64
_080CD7E0:
	lsl r0, r0, #24
	lsr r3, r0, #24
_080CD7E4:
	ldr r1, _080CD840  @ =gRam
	ldr r2, _080CD844  @ =0x0000096C
	add r0, r1, r2
	strb r3, [r0]
	mov r7, #3
	add r6, r1, #0
	ldr r3, _080CD848  @ =0x000015F9
	add r3, r3, r6
	mov r9, r3
	mov r8, r6
_080CD7F8:
	ldr r1, _080CD844  @ =0x0000096C
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	ldrb r1, [r0]
	ldr r3, _080CD84C  @ =0x00000961
	add r0, r6, r3
	ldrb r2, [r0]
	lsl r2, r2, #8
	ldr r3, _080CD850  @ =gUnknown_08172BD0
	lsl r0, r5, #1
	add r0, r0, r3
	orr r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r12, r1
	ldr r1, _080CD854  @ =0x00000964
	add r0, r6, r1
	ldrb r2, [r0]
	ldr r0, _080CD858  @ =gUnknown_08172C90
	add r0, r5, r0
	ldrb r0, [r0]
	add r2, r0, r2
	mov r3, r9
	ldrb r4, [r3]
	cmp r4, #0
	bne _080CD85C
	mov r4, #142
	b _080CD86A
_080CD840:
	.4byte gRam
_080CD844:
	.4byte 0x0000096C
_080CD848:
	.4byte 0x000015F9
_080CD84C:
	.4byte 0x00000961
_080CD850:
	.4byte gUnknown_08172BD0
_080CD854:
	.4byte 0x00000964
_080CD858:
	.4byte gUnknown_08172C90
_080CD85C:
	lsl r1, r4, #24
	ldr r0, _080CD8AC  @ =gUnknown_08172CF0
	add r0, r5, r0
	ldrb r4, [r0]
	cmp r1, #0
	bge _080CD86A
	mov r4, #242
_080CD86A:
	ldr r0, _080CD8B0  @ =gUnknown_08172D50
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r0, _080CD8B4  @ =0x00000969
	add r0, r0, r8
	ldrb r0, [r0]
	orr r3, r3, r0
	ldr r0, _080CD8B8  @ =gUnknown_03003E74
	sub r1, r7, #3
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, r12
	lsl r3, r3, #8
	orr r4, r4, r3
	lsl r3, r4, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r7, r7, #1
	cmp r7, #0
	bge _080CD7F8
_080CD89C:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CD8AC:
	.4byte gUnknown_08172CF0
_080CD8B0:
	.4byte gUnknown_08172D50
_080CD8B4:
	.4byte 0x00000969
_080CD8B8:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_080CD724

