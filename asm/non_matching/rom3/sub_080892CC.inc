	THUMB_FUNC_START sub_080892CC
sub_080892CC: @ 0x080892CC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r5, _08089348  @ =gRam
	ldr r1, _0808934C  @ =0x00001770
	add r0, r5, r1
	mov r1, #6
	strb r1, [r0]
	ldr r2, _08089350  @ =0x00001605
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _08089354  @ =gUnknown_02003080
	ldrb r0, [r0]
	cmp r0, #6
	bne _080893C4
	bl sub_08089268
	bl sub_08088CD8
	ldr r0, _08089358  @ =0x00000AFC
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #21
	bne _080893C4
	ldr r1, _0808935C  @ =0x00000BFE
	add r3, r5, r1
	ldr r4, _08089360  @ =gUnknown_081676B2
	ldr r0, _08089364  @ =0x00000AFE
	add r2, r5, r0
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r3]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r3]
	ldr r1, _08089368  @ =0x00000AA6
	add r3, r5, r1
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r3]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r3]
	ldrh r0, [r2]
	lsl r0, r0, #1
	ldr r2, _0808936C  @ =0x000018F0
	add r1, r5, r2
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08089370
	mov r2, #1
	mov r3, #0
	b _08089376
_08089348:
	.4byte gRam
_0808934C:
	.4byte 0x00001770
_08089350:
	.4byte 0x00001605
_08089354:
	.4byte gUnknown_02003080
_08089358:
	.4byte 0x00000AFC
_0808935C:
	.4byte 0x00000BFE
_08089360:
	.4byte gUnknown_081676B2
_08089364:
	.4byte 0x00000AFE
_08089368:
	.4byte 0x00000AA6
_0808936C:
	.4byte 0x000018F0
_08089370:
	mov r3, #1
	mov r2, #128
	lsl r2, r2, #1
_08089376:
	ldr r4, _080893D0  @ =gRam
	ldr r0, _080893D4  @ =0x00000AF8
	add r1, r4, r0
	ldrh r0, [r1]
	orr r2, r2, r0
	mov r0, #0
	mov r8, r0
	mov r6, #0
	strh r2, [r1]
	mov r1, #158
	lsl r1, r1, #4
	add r0, r4, r1
	add r0, r3, r0
	ldrb r2, [r0]
	mov r1, #2
	orr r2, r2, r1
	strb r2, [r0]
	ldr r1, _080893D8  @ =0x00001A78
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r2, _080893DC  @ =0x00000AFE
	add r5, r4, r2
	ldrh r0, [r5]
	bl sub_08082EA4
	ldr r1, _080893E0  @ =0x00000AFC
	add r0, r4, r1
	strh r6, [r0]
	strh r6, [r5]
	bl sub_08070064
	ldr r2, _080893E4  @ =0x00001770
	add r0, r4, r2
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080893E8  @ =0x00001605
	add r4, r4, r2
	strb r1, [r4]
_080893C4:
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080893D0:
	.4byte gRam
_080893D4:
	.4byte 0x00000AF8
_080893D8:
	.4byte 0x00001A78
_080893DC:
	.4byte 0x00000AFE
_080893E0:
	.4byte 0x00000AFC
_080893E4:
	.4byte 0x00001770
_080893E8:
	.4byte 0x00001605
	THUMB_FUNC_END sub_080892CC

