	THUMB_FUNC_START sub_080F1E48
sub_080F1E48: @ 0x080F1E48
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _080F1E70  @ =gRam
	ldr r1, _080F1E74  @ =0x00000F92
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F1E78
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C632C
	b _080F1EEC
	.byte 0x00
	.byte 0x00
_080F1E70:
	.4byte gRam
_080F1E74:
	.4byte 0x00000F92
_080F1E78:
	ldr r0, _080F1EF4  @ =0x00001622
	add r2, r6, r0
	ldrb r1, [r2]
	add r0, r0, #1
	add r3, r6, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r1, r1, #4
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
	ldrb r1, [r4]
	sub r1, r1, #1
	lsl r1, r1, #4
	ldr r0, _080F1EF8  @ =gUnknown_08178F6C
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	ldr r1, _080F1EFC  @ =0x00001624
	add r4, r6, r1
	ldrb r1, [r4]
	ldr r0, _080F1F00  @ =0x00001142
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r1, r1, r0
	ldr r0, _080F1F04  @ =0x00001625
	add r3, r6, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldrb r0, [r2]
	lsr r2, r0, #2
	cmp r2, #1
	bls _080F1ECC
	mov r2, #2
_080F1ECC:
	ldr r1, _080F1F08  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r0, _080F1F0C  @ =gUnknown_08178FEC
	add r1, r1, r0
	add r0, r7, #0
	mov r2, #3
	bl sub_080C9480
	add r0, r7, #0
	bl sub_080C1F70
_080F1EEC:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F1EF4:
	.4byte 0x00001622
_080F1EF8:
	.4byte gUnknown_08178F6C
_080F1EFC:
	.4byte 0x00001624
_080F1F00:
	.4byte 0x00001142
_080F1F04:
	.4byte 0x00001625
_080F1F08:
	.4byte gUnknown_03003E74
_080F1F0C:
	.4byte gUnknown_08178FEC
	THUMB_FUNC_END sub_080F1E48

