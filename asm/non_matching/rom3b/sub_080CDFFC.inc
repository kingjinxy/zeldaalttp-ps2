	THUMB_FUNC_START sub_080CDFFC
sub_080CDFFC: @ 0x080CDFFC
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080CE0C8  @ =gRam
	ldr r1, _080CE0CC  @ =0x000012FE
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #80
	bne _080CE06A
	ldr r2, _080CE0D0  @ =0x000009AD
	add r0, r3, r2
	ldr r5, _080CE0D4  @ =0x00001605
	add r1, r3, r5
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CE06A
	ldr r1, _080CE0D8  @ =0x0000122C
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strb r1, [r0]
	ldr r5, _080CE0DC  @ =0x00001268
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	sub r5, r5, #90
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CE0E0  @ =0x00000964
	add r2, r3, r1
	strb r0, [r2]
	add r5, r5, #60
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r5, _080CE0E4  @ =0x00000965
	add r0, r3, r5
	strb r1, [r0]
	ldrh r0, [r2]
	sub r0, r0, #16
	strh r0, [r2]
	mov r0, #18
	bl sub_08079844
_080CE06A:
	ldr r5, _080CE0C8  @ =gRam
	ldr r2, _080CE0E8  @ =gUnknown_08172E6B
	ldr r1, _080CE0CC  @ =0x000012FE
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r2, _080CE0EC  @ =0x00000968
	add r7, r5, r2
	strb r0, [r7]
	add r0, r4, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE0C0
	ldr r0, _080CE0F0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r1, [r1]
	add r3, r3, #4
	add r2, r5, r3
	ldrh r2, [r2]
	ldr r4, _080CE0F4  @ =gUnknown_08172E5F
	ldrb r3, [r6]
	lsr r3, r3, #4
	add r3, r3, r4
	ldrb r5, [r3]
	ldrb r3, [r7]
	mov r4, #53
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r3, r3, r5
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_080CE0C0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CE0C8:
	.4byte gRam
_080CE0CC:
	.4byte 0x000012FE
_080CE0D0:
	.4byte 0x000009AD
_080CE0D4:
	.4byte 0x00001605
_080CE0D8:
	.4byte 0x0000122C
_080CE0DC:
	.4byte 0x00001268
_080CE0E0:
	.4byte 0x00000964
_080CE0E4:
	.4byte 0x00000965
_080CE0E8:
	.4byte gUnknown_08172E6B
_080CE0EC:
	.4byte 0x00000968
_080CE0F0:
	.4byte gUnknown_03003E74
_080CE0F4:
	.4byte gUnknown_08172E5F
	THUMB_FUNC_END sub_080CDFFC

