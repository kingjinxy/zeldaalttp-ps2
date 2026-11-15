	THUMB_FUNC_START sub_08070748
sub_08070748: @ 0x08070748
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	bl sub_080AB70C
	ldr r1, _080708D4  @ =gUnknown_0814CE34
	ldr r4, _080708D8  @ =gRam
	ldr r2, _080708DC  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r3, _080708E0  @ =0x00000AD2
	add r1, r4, r3
	mov r0, #0
	strh r0, [r1]
	bl sub_08089FB0
	ldr r1, _080708E4  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080707AA
	ldr r2, _080708E8  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r3, _080708EC  @ =0x000009DE
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080707AA
	sub r2, r2, #100
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #2
	beq _080707AA
	cmp r0, #18
	beq _080707AA
	mov r0, #3
	strb r0, [r1]
_080707AA:
	ldr r5, _080708D8  @ =gRam
	ldr r3, _080708DC  @ =0x000009AD
	add r4, r5, r3
	ldrb r0, [r4]
	cmp r0, #0
	bne _080707EE
	bl sub_0812FA28
	bl sub_0806C988
	ldrb r0, [r4]
	cmp r0, #0
	bne _080707EE
	bl sub_0807B54C
	ldrb r0, [r4]
	cmp r0, #0
	bne _080707EE
	bl sub_0808A45C
	ldr r1, _080708F0  @ =0x00000AFC
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080707E0
	bl sub_080892CC
_080707E0:
	ldr r2, _080708F4  @ =0x0000172C
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080707EE
	bl sub_080705B4
_080707EE:
	bl sub_0808ABA4
	ldr r4, _080708D8  @ =gRam
	ldr r3, _080708F8  @ =0x00000952
	add r1, r4, r3
	ldrh r0, [r1]
	mov r10, r0
	ldr r2, _080708FC  @ =0x00000958
	add r3, r4, r2
	ldrh r0, [r3]
	str r0, [sp]
	sub r2, r2, #8
	add r2, r2, r4
	mov r12, r2
	ldrh r0, [r2]
	mov r9, r0
	ldr r2, _08070900  @ =0x00000956
	add r7, r4, r2
	ldrh r0, [r7]
	mov r8, r0
	add r2, r2, #210
	add r0, r4, r2
	ldrh r2, [r0]
	mov r0, r10
	add r5, r0, r2
	strh r5, [r1]
	ldr r1, _08070904  @ =0x00000A2A
	add r0, r4, r1
	ldrh r1, [r0]
	ldrh r0, [r3]
	add r6, r1, r0
	strh r6, [r3]
	mov r3, r12
	ldrh r3, [r3]
	add r2, r2, r3
	mov r0, r12
	strh r2, [r0]
	ldrh r3, [r7]
	add r1, r1, r3
	strh r1, [r7]
	ldr r3, _08070908  @ =0x00000A2C
	add r0, r4, r3
	strh r5, [r0]
	add r3, r3, #4
	add r0, r4, r3
	strh r6, [r0]
	ldr r0, _0807090C  @ =0x00000A2E
	add r3, r4, r0
	strh r2, [r3]
	add r0, r0, #4
	add r2, r4, r0
	strh r1, [r2]
	ldr r1, _08070910  @ =0x00000ACE
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0807088C
	sub r1, r1, #244
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #151
	beq _0807088C
	add r1, r1, #238
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r0, r5
	mov r1, r12
	strh r0, [r1]
	strh r0, [r3]
	ldr r3, _08070914  @ =0x00000ACA
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r6
	strh r0, [r7]
	strh r0, [r2]
	ldrh r0, [r1]
	mov r9, r0
	ldrh r7, [r7]
	mov r8, r7
_0807088C:
	bl sub_080B01D0
	bl sub_080C1B40
	ldr r1, _080708D8  @ =gRam
	ldr r2, _080708F8  @ =0x00000952
	add r0, r1, r2
	mov r3, r10
	strh r3, [r0]
	add r2, r2, #6
	add r0, r1, r2
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r0]
	sub r2, r2, #8
	add r0, r1, r2
	mov r3, r9
	strh r3, [r0]
	ldr r0, _08070900  @ =0x00000956
	add r1, r1, r0
	mov r2, r8
	strh r2, [r1]
	bl sub_080A3EE0
	bl sub_080AA6D8
	bl sub_080AAC58
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080708D4:
	.4byte gUnknown_0814CE34
_080708D8:
	.4byte gRam
_080708DC:
	.4byte 0x000009AD
_080708E0:
	.4byte 0x00000AD2
_080708E4:
	.4byte 0x0000165E
_080708E8:
	.4byte 0x00000A3E
_080708EC:
	.4byte 0x000009DE
_080708F0:
	.4byte 0x00000AFC
_080708F4:
	.4byte 0x0000172C
_080708F8:
	.4byte 0x00000952
_080708FC:
	.4byte 0x00000958
_08070900:
	.4byte 0x00000956
_08070904:
	.4byte 0x00000A2A
_08070908:
	.4byte 0x00000A2C
_0807090C:
	.4byte 0x00000A2E
_08070910:
	.4byte 0x00000ACE
_08070914:
	.4byte 0x00000ACA
	THUMB_FUNC_END sub_08070748

