	THUMB_FUNC_START sub_0808ABA4
sub_0808ABA4: @ 0x0808ABA4
	push {r4-r7,lr}
	ldr r0, _0808AC00  @ =gRam
	mov r2, #176
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r1, [r1]
	add r7, r0, #0
	cmp r1, #0
	bne _0808ABB8
	b _0808AD62
_0808ABB8:
	ldr r5, _0808AC04  @ =0x000009AD
	add r0, r7, r5
	ldrb r0, [r0]
	cmp r0, #21
	bne _0808ABC4
	b _0808AD62
_0808ABC4:
	ldr r1, _0808AC08  @ =0x000016D5
	add r0, r7, r1
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r3, r7, r2
	strh r0, [r3]
	lsl r1, r0, #16
	asr r6, r1, #16
	ldr r5, _0808AC0C  @ =0x0000172C
	add r0, r7, r5
	ldrb r2, [r0]
	cmp r2, #0
	beq _0808AC38
	mov r0, #254
	and r0, r0, r2
	lsl r6, r0, #1
	cmp r6, #0
	beq _0808AC1A
	asr r0, r1, #16
	cmp r0, #3
	bgt _0808AC14
	ldr r1, _0808AC10  @ =0x000016C4
	add r0, r7, r1
	ldrh r0, [r0]
	add r2, r0, #0
	add r2, r2, #8
	mov r0, #255
	and r2, r2, r0
	b _0808AC2E
_0808AC00:
	.4byte gRam
_0808AC04:
	.4byte 0x000009AD
_0808AC08:
	.4byte 0x000016D5
_0808AC0C:
	.4byte 0x0000172C
_0808AC10:
	.4byte 0x000016C4
_0808AC14:
	mov r2, #0
	ldrsh r6, [r3, r2]
	b _0808AC38
_0808AC1A:
	asr r0, r1, #16
	cmp r0, #3
	bgt _0808AC26
	mov r5, #0
	ldrsh r6, [r3, r5]
	b _0808AC38
_0808AC26:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrb r2, [r0]
_0808AC2E:
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #127
	ble _0808AC38
	add r6, r6, #2
_0808AC38:
	cmp r6, #3
	bgt _0808ACE0
	ldr r2, _0808ACBC  @ =0x000016C4
	add r0, r7, r2
	ldrh r3, [r0]
	sub r3, r3, #119
	mov r5, #150
	lsl r5, r5, #4
	add r4, r7, r5
	strh r3, [r4]
	ldr r1, _0808ACC0  @ =0x00000952
	add r0, r7, r1
	ldrh r2, [r0]
	ldr r1, _0808ACC4  @ =gUnknown_081536CE
	asr r0, r6, #1
	lsl r5, r0, #1
	add r1, r5, r1
	sub r2, r2, r3
	ldrh r1, [r1]
	add r2, r2, r1
	mov r1, #149
	lsl r1, r1, #4
	add r0, r7, r1
	strh r2, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r7, r2
	ldrh r1, [r0]
	sub r1, r1, #88
	strh r1, [r4]
	ldr r2, _0808ACC8  @ =0x00000958
	add r0, r7, r2
	ldrh r2, [r0]
	ldr r0, _0808ACCC  @ =gUnknown_081536D6
	add r0, r5, r0
	sub r2, r2, r1
	ldrh r0, [r0]
	add r2, r2, r0
	ldr r0, _0808ACD0  @ =gUnknown_081536DE
	add r0, r5, r0
	ldrh r1, [r0]
	add r1, r1, r2
	ldr r0, _0808ACD4  @ =gUnknown_081536E6
	add r0, r5, r0
	ldrh r4, [r0]
	add r1, r4, r1
	lsl r1, r1, #16
	lsr r2, r1, #16
	cmp r1, #0
	bge _0808AC9E
	mov r2, #0
_0808AC9E:
	ldr r0, _0808ACD8  @ =gUnknown_081536EE
	add r3, r5, r0
	lsl r0, r2, #16
	asr r0, r0, #16
	mov r5, #0
	ldrsh r1, [r3, r5]
	cmp r0, r1
	blt _0808ACB0
	ldrh r2, [r3]
_0808ACB0:
	lsl r0, r2, #16
	asr r0, r0, #16
	sub r0, r0, r4
	ldr r2, _0808ACDC  @ =0x00000956
	b _0808AD5E
	.byte 0x00
	.byte 0x00
_0808ACBC:
	.4byte 0x000016C4
_0808ACC0:
	.4byte 0x00000952
_0808ACC4:
	.4byte gUnknown_081536CE
_0808ACC8:
	.4byte 0x00000958
_0808ACCC:
	.4byte gUnknown_081536D6
_0808ACD0:
	.4byte gUnknown_081536DE
_0808ACD4:
	.4byte gUnknown_081536E6
_0808ACD8:
	.4byte gUnknown_081536EE
_0808ACDC:
	.4byte 0x00000956
_0808ACE0:
	add r3, r7, #0
	mov r5, #182
	lsl r5, r5, #5
	add r0, r3, r5
	ldrh r4, [r0]
	sub r4, r4, #114
	mov r0, #150
	lsl r0, r0, #4
	add r5, r3, r0
	strh r4, [r5]
	ldr r1, _0808AD68  @ =0x00000958
	add r0, r3, r1
	ldrh r2, [r0]
	ldr r1, _0808AD6C  @ =gUnknown_081536D6
	asr r0, r6, #1
	lsl r6, r0, #1
	add r1, r6, r1
	sub r2, r2, r4
	ldrh r1, [r1]
	add r2, r2, r1
	ldr r1, _0808AD70  @ =0x00000956
	add r0, r3, r1
	strh r2, [r0]
	ldr r2, _0808AD74  @ =0x000016C4
	add r0, r3, r2
	ldrh r1, [r0]
	sub r1, r1, #88
	strh r1, [r5]
	ldr r5, _0808AD78  @ =0x00000952
	add r3, r3, r5
	ldrh r2, [r3]
	ldr r0, _0808AD7C  @ =gUnknown_081536CE
	add r0, r6, r0
	sub r2, r2, r1
	ldrh r0, [r0]
	add r2, r2, r0
	ldr r0, _0808AD80  @ =gUnknown_081536DE
	add r0, r6, r0
	ldrh r1, [r0]
	add r1, r1, r2
	ldr r0, _0808AD84  @ =gUnknown_081536E6
	add r0, r6, r0
	ldrh r4, [r0]
	add r1, r4, r1
	lsl r1, r1, #16
	lsr r2, r1, #16
	cmp r1, #0
	bge _0808AD42
	mov r2, #0
_0808AD42:
	ldr r0, _0808AD88  @ =gUnknown_081536EE
	add r3, r6, r0
	lsl r0, r2, #16
	asr r0, r0, #16
	mov r5, #0
	ldrsh r1, [r3, r5]
	cmp r0, r1
	blt _0808AD54
	ldrh r2, [r3]
_0808AD54:
	lsl r0, r2, #16
	asr r0, r0, #16
	sub r0, r0, r4
	mov r2, #149
	lsl r2, r2, #4
_0808AD5E:
	add r1, r7, r2
	strh r0, [r1]
_0808AD62:
	pop {r4-r7}
	pop {r0}
	bx r0
_0808AD68:
	.4byte 0x00000958
_0808AD6C:
	.4byte gUnknown_081536D6
_0808AD70:
	.4byte 0x00000956
_0808AD74:
	.4byte 0x000016C4
_0808AD78:
	.4byte 0x00000952
_0808AD7C:
	.4byte gUnknown_081536CE
_0808AD80:
	.4byte gUnknown_081536DE
_0808AD84:
	.4byte gUnknown_081536E6
_0808AD88:
	.4byte gUnknown_081536EE
	THUMB_FUNC_END sub_0808ABA4

