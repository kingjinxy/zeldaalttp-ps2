	THUMB_FUNC_START sub_08071E7C
sub_08071E7C: @ 0x08071E7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _08071F64  @ =gRam
	ldr r2, _08071F68  @ =0x000016D6
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r7, r0, #0
	cmp r1, #0
	beq _08071EE2
	ldr r3, _08071F6C  @ =0x00001727
	add r0, r7, r3
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r1, r7, r4
	strh r0, [r1]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r7, r5
	mov r6, #0
	ldrsh r2, [r0, r6]
	ldr r1, _08071F70  @ =gUnknown_0814D37A
	ldr r3, _08071F74  @ =0x00000C86
	add r0, r7, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r0, [r0, r4]
	sub r2, r2, r0
	mov r5, #6
	mov r8, r5
	mov r4, #8
	cmp r2, #3
	ble _08071F48
	mov r6, #4
	mov r8, r6
	mov r4, #4
	ldr r1, _08071F78  @ =0x00000C96
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r2, r0
	bge _08071F48
_08071EE2:
	ldr r2, _08071F7C  @ =0x000016D7
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08071EF2
	b _08072240
_08071EF2:
	ldr r3, _08071F78  @ =0x00000C96
	add r0, r7, r3
	ldrh r0, [r0]
	add r0, r0, #4
	ldr r4, _08071F80  @ =0x00000964
	add r3, r7, r4
	strh r0, [r3]
	ldr r5, _08071F6C  @ =0x00001727
	add r0, r7, r5
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	mov r6, #150
	lsl r6, r6, #4
	add r1, r7, r6
	strh r0, [r1]
	ldr r1, _08071F84  @ =0x000016C4
	add r0, r7, r1
	mov r4, #0
	ldrsh r2, [r0, r4]
	ldr r1, _08071F88  @ =gUnknown_0814D3FA
	ldr r5, _08071F74  @ =0x00000C86
	add r0, r7, r5
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	mov r6, #0
	ldrsh r0, [r0, r6]
	sub r2, r2, r0
	mov r0, #2
	mov r8, r0
	mov r4, #2
	cmp r2, #5
	ble _08071F48
	mov r1, #0
	mov r8, r1
	mov r4, #1
	mov r5, #0
	ldrsh r0, [r3, r5]
	cmp r2, r0
	bge _08071F48
	b _08072244
_08071F48:
	mov r6, #150
	lsl r6, r6, #4
	add r0, r7, r6
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r4, r0
	bne _08071F5E
	bl sub_080715DC
	cmp r0, #1
	bne _08071F8C
_08071F5E:
	bl sub_08071D7C
	b _08072244
_08071F64:
	.4byte gRam
_08071F68:
	.4byte 0x000016D6
_08071F6C:
	.4byte 0x00001727
_08071F70:
	.4byte gUnknown_0814D37A
_08071F74:
	.4byte 0x00000C86
_08071F78:
	.4byte 0x00000C96
_08071F7C:
	.4byte 0x000016D7
_08071F80:
	.4byte 0x00000964
_08071F84:
	.4byte 0x000016C4
_08071F88:
	.4byte gUnknown_0814D3FA
_08071F8C:
	ldr r2, _08072194  @ =0x00000964
	add r4, r7, r2
	mov r3, r8
	strh r3, [r4]
	bl sub_0807166C
	mov r6, #156
	lsl r6, r6, #4
	add r5, r7, r6
	ldr r1, _08072198  @ =gUnknown_0814D0A2
	mov r2, #0
	ldrsh r0, [r4, r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r5]
	ldrh r2, [r0]
	and r2, r2, r1
	strh r2, [r5]
	ldr r6, _0807219C  @ =0x00000C86
	add r3, r7, r6
	ldr r1, _080721A0  @ =gUnknown_0814D2AA
	mov r6, #0
	ldrsh r0, [r4, r6]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r3, _080721A4  @ =0x00000968
	add r1, r7, r3
	strh r0, [r1]
	mov r6, #0
	ldrsh r0, [r4, r6]
	lsl r0, r0, #6
	mov r3, #0
	ldrsh r1, [r1, r3]
	orr r0, r0, r1
	ldr r1, _080721A8  @ =gUnknown_0814D0AA
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r2, r2, r0
	strh r2, [r5]
	ldr r4, _080721AC  @ =0x000009C6
	add r2, r7, r4
	ldrh r0, [r2]
	cmp r0, #42
	bne _08071FF4
	ldr r5, _080721B0  @ =0x00000A3E
	add r1, r7, r5
	mov r0, #255
	strb r0, [r1]
_08071FF4:
	ldrh r0, [r2]
	cmp r0, #104
	bne _0807200C
	ldr r6, _080721B4  @ =0x00000A42
	add r0, r7, r6
	ldrh r0, [r0]
	cmp r0, #21
	bne _0807200C
	ldr r0, _080721B8  @ =0x00000A3C
	add r1, r7, r0
	mov r0, #14
	strh r0, [r1]
_0807200C:
	ldr r0, _080721BC  @ =gRam
	ldr r2, _080721AC  @ =0x000009C6
	add r1, r0, r2
	ldrh r1, [r1]
	add r7, r0, #0
	cmp r1, #24
	bne _0807202C
	ldr r3, _080721C0  @ =0x0000165E
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #2
	bhi _0807202C
	ldr r4, _080721B8  @ =0x00000A3C
	add r1, r7, r4
	ldr r0, _080721C4  @ =0x0000FFF1
	strh r0, [r1]
_0807202C:
	ldr r5, _080721AC  @ =0x000009C6
	add r6, r7, r5
	ldrh r0, [r6]
	mov r10, r0
	mov r1, #192
	ldr r2, _080721C8  @ =gUnknown_0814CEDC
	mov r9, r2
	ldr r3, _0807219C  @ =0x00000C86
	add r2, r7, r3
	ldr r3, _080721A0  @ =gUnknown_0814D2AA
	mov r5, r8
	asr r4, r5, #1
	lsl r0, r4, #1
	add r0, r0, r3
	mov r5, #0
	ldrsh r0, [r0, r5]
	ldrh r2, [r2]
	add r0, r0, r2
	asr r0, r0, #1
	add r0, r0, r9
	mov r2, r10
	and r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	strh r1, [r6]
	mov r5, #171
	lsl r5, r5, #4
	add r0, r7, r5
	strh r1, [r0]
	add r6, r4, #0
	cmp r1, #24
	bne _0807207E
	ldr r1, _080721C0  @ =0x0000165E
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _0807207E
	ldr r2, _080721B8  @ =0x00000A3C
	add r1, r7, r2
	ldr r0, _080721C4  @ =0x0000FFF1
	strh r0, [r1]
_0807207E:
	ldr r4, _080721BC  @ =gRam
	ldr r2, _080721CC  @ =gUnknown_0814CF1C
	ldr r0, _0807219C  @ =0x00000C86
	add r5, r4, r0
	ldrh r1, [r5]
	lsl r0, r6, #1
	add r0, r0, r3
	mov r6, #0
	ldrsh r3, [r0, r6]
	add r1, r1, r3
	asr r1, r1, #1
	add r1, r1, r2
	ldrb r0, [r1]
	ldr r1, _080721D0  @ =0x000009BA
	add r6, r4, r1
	strb r0, [r6]
	ldr r1, _080721D4  @ =gUnknown_0814CF5C
	ldrh r0, [r5]
	add r0, r0, r3
	asr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r2, _080721D8  @ =0x000009BB
	add r2, r2, r4
	mov r9, r2
	strb r0, [r2]
	ldr r1, _080721DC  @ =gUnknown_0814CFA2
	ldrh r0, [r5]
	add r0, r0, r3
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _080721E0  @ =0x00000B94
	add r2, r4, r0
	strh r1, [r2]
	ldr r0, _080721E4  @ =gUnknown_0814CF9C
	mov r8, r0
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	add r1, r1, r0
	strh r1, [r2]
	mov r2, #128
	lsl r2, r2, #1
	add r6, r2, #0
	add r1, r1, r6
	ldr r2, _080721E8  @ =0x00000B96
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080721EC  @ =gUnknown_0814D022
	ldrh r0, [r5]
	add r0, r0, r3
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r3, _080721F0  @ =0x00000B98
	add r2, r4, r3
	strh r1, [r2]
	mov r5, r9
	ldrb r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	add r1, r1, r0
	strh r1, [r2]
	add r1, r1, r6
	ldr r6, _080721F4  @ =0x00000B9A
	add r0, r4, r6
	strh r1, [r0]
	bl sub_0806A0C0
	ldr r1, _080721F8  @ =0x000009AD
	add r0, r4, r1
	mov r3, #1
	strb r3, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r2, r4, r5
	ldrh r1, [r2]
	sub r6, r6, #228
	add r0, r4, r6
	strh r1, [r0]
	ldr r0, _080721FC  @ =0x00000ABC
	add r4, r4, r0
	strh r1, [r4]
	mov r4, #0
	ldrsh r1, [r2, r4]
	mov r4, #3
	add r0, r1, #0
	and r0, r0, r3
	cmp r0, #0
	bne _0807214A
	mov r2, #1
_0807213E:
	asr r1, r1, #1
	sub r4, r4, #1
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _0807213E
_0807214A:
	ldr r2, _080721BC  @ =gRam
	ldr r5, _08072200  @ =0x00000ABE
	add r0, r2, r5
	mov r5, #0
	strh r4, [r0]
	ldr r6, _08072204  @ =0x00000C0E
	add r0, r2, r6
	strh r4, [r0]
	ldr r1, _08072208  @ =0x00000A34
	add r0, r2, r1
	strh r5, [r0]
	mov r0, #63
	mov r3, r10
	and r3, r3, r0
	cmp r3, #0
	beq _08072176
	ldr r4, _080721AC  @ =0x000009C6
	add r3, r2, r4
	ldrh r1, [r3]
	and r0, r0, r1
	cmp r0, #0
	bne _08072218
_08072176:
	ldr r6, _0807220C  @ =0x000009E8
	add r0, r2, r6
	strh r5, [r0]
	ldr r0, _080721F8  @ =0x000009AD
	add r1, r2, r0
	mov r0, #13
	strb r0, [r1]
	ldr r3, _08072210  @ =0x000009CF
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	ldr r4, _08072214  @ =0x00000D02
	add r0, r2, r4
	strh r5, [r0]
	b _08072244
_08072194:
	.4byte 0x00000964
_08072198:
	.4byte gUnknown_0814D0A2
_0807219C:
	.4byte 0x00000C86
_080721A0:
	.4byte gUnknown_0814D2AA
_080721A4:
	.4byte 0x00000968
_080721A8:
	.4byte gUnknown_0814D0AA
_080721AC:
	.4byte 0x000009C6
_080721B0:
	.4byte 0x00000A3E
_080721B4:
	.4byte 0x00000A42
_080721B8:
	.4byte 0x00000A3C
_080721BC:
	.4byte gRam
_080721C0:
	.4byte 0x0000165E
_080721C4:
	.4byte 0x0000FFF1
_080721C8:
	.4byte gUnknown_0814CEDC
_080721CC:
	.4byte gUnknown_0814CF1C
_080721D0:
	.4byte 0x000009BA
_080721D4:
	.4byte gUnknown_0814CF5C
_080721D8:
	.4byte 0x000009BB
_080721DC:
	.4byte gUnknown_0814CFA2
_080721E0:
	.4byte 0x00000B94
_080721E4:
	.4byte gUnknown_0814CF9C
_080721E8:
	.4byte 0x00000B96
_080721EC:
	.4byte gUnknown_0814D022
_080721F0:
	.4byte 0x00000B98
_080721F4:
	.4byte 0x00000B9A
_080721F8:
	.4byte 0x000009AD
_080721FC:
	.4byte 0x00000ABC
_08072200:
	.4byte 0x00000ABE
_08072204:
	.4byte 0x00000C0E
_08072208:
	.4byte 0x00000A34
_0807220C:
	.4byte 0x000009E8
_08072210:
	.4byte 0x000009CF
_08072214:
	.4byte 0x00000D02
_08072218:
	ldrh r0, [r3]
	ldr r5, _08072238  @ =gUnknown_02002DC0
	add r1, r0, r5
	ldrb r4, [r1]
	ldr r1, _0807223C  @ =gUnknown_0814C8E8
	add r0, r0, r1
	ldrb r0, [r0]
	mov r8, r0
	add r0, r4, #0
	mov r1, r8
	bl sub_0813084C
	bl sub_08077D98
	b _08072244
	.byte 0x00
	.byte 0x00
_08072238:
	.4byte gUnknown_02002DC0
_0807223C:
	.4byte gUnknown_0814C8E8
_08072240:
	bl sub_08071D7C
_08072244:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08071E7C

	.byte 0x00
	.byte 0x00
