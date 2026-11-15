	THUMB_FUNC_START sub_08088698
sub_08088698: @ 0x08088698
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r6, _080886F0  @ =gRam
	ldr r0, _080886F4  @ =0x000009F4
	add r0, r0, r6
	mov r8, r0
	ldrh r5, [r0]
	cmp r5, #0
	bne _080886CE
	ldr r1, _080886F8  @ =0x00000B06
	add r4, r6, r1
	strh r5, [r4]
	ldr r1, _080886FC  @ =gUnknown_081633C8
	ldr r2, _08088700  @ =0x00000B62
	add r0, r6, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r9, r0
	bl sub_0808812C
	mov r7, r8
	strh r5, [r7]
	strh r5, [r4]
_080886CE:
	ldr r0, _08088704  @ =0x00000978
	add r1, r6, r0
	mov r0, #0
	strh r0, [r1]
	ldr r1, _080886FC  @ =gUnknown_081633C8
	ldr r2, _08088700  @ =0x00000B62
	add r0, r6, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	mov r9, r0
	mov r4, r8
	ldrh r5, [r4]
	add r1, r0, r5
	b _08088790
	.byte 0x00
	.byte 0x00
_080886F0:
	.4byte gRam
_080886F4:
	.4byte 0x000009F4
_080886F8:
	.4byte 0x00000B06
_080886FC:
	.4byte gUnknown_081633C8
_08088700:
	.4byte 0x00000B62
_08088704:
	.4byte 0x00000978
_08088708:
	ldr r3, _080887B4  @ =gRam
	mov r7, r9
	add r2, r7, r5
	ldrb r1, [r2]
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	mov r7, #0
	mov r12, r7
	mov r4, #0
	mov r8, r4
	strb r1, [r0]
	ldrb r1, [r2, #1]
	ldr r7, _080887B8  @ =0x00000961
	add r0, r3, r7
	strb r1, [r0]
	ldrb r0, [r2, #1]
	add r4, r0, #0
	ldrb r1, [r2]
	mov r0, #252
	and r0, r0, r1
	lsr r1, r0, #1
	mov r0, #151
	lsl r0, r0, #4
	add r6, r3, r0
	strb r1, [r6]
	mov r2, #4
	add r0, r4, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08088750
	mov r7, #128
	neg r7, r7
	add r0, r7, #0
	orr r1, r1, r0
	strb r1, [r6]
_08088750:
	lsr r1, r4, #3
	ldr r4, _080887BC  @ =0x00000971
	add r0, r3, r4
	strb r1, [r0]
	add r0, r5, #3
	ldr r7, _080887C0  @ =0x000009F4
	add r4, r3, r7
	strh r0, [r4]
	mov r0, #0
	ldrsh r5, [r6, r0]
	ldr r1, _080887C4  @ =0x00000974
	add r0, r3, r1
	strh r2, [r0]
	sub r7, r7, #136
	add r2, r3, r7
	mov r0, r8
	strh r0, [r2]
	ldrh r1, [r6]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #57
	ble _08088780
	mov r0, #1
	strh r0, [r2]
_08088780:
	bl sub_08086E58
	strh r5, [r6]
	bl sub_08088568
	ldrh r5, [r4]
	mov r2, r9
	add r1, r2, r5
_08088790:
	ldrb r0, [r1]
	cmp r0, #255
	bne _08088708
	ldrb r0, [r1, #1]
	cmp r0, #255
	bne _08088708
	ldr r0, _080887B4  @ =gRam
	ldr r4, _080887C8  @ =0x000009AD
	add r0, r0, r4
	mov r1, #0
	strb r1, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080887B4:
	.4byte gRam
_080887B8:
	.4byte 0x00000961
_080887BC:
	.4byte 0x00000971
_080887C0:
	.4byte 0x000009F4
_080887C4:
	.4byte 0x00000974
_080887C8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08088698

