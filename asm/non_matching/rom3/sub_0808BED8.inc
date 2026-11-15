	THUMB_FUNC_START sub_0808BED8
sub_0808BED8: @ 0x0808BED8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r7, _0808C00C  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrh r0, [r0]
	mov r10, r0
	mov r1, r10
	add r1, r1, #7
	ldr r2, _0808C010  @ =0x00000C88
	add r0, r7, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r3, _0808C014  @ =gUnknown_03002EBA
	ldrh r4, [r3]
	mov r3, sp
	strh r4, [r3]
	add r6, r4, #0
	and r1, r1, r6
	mov r0, #16
	neg r0, r0
	add r2, r0, #0
	and r1, r1, r2
	mov r3, #150
	lsl r3, r3, #4
	add r0, r7, r3
	strh r1, [r0]
	mov r3, #248
	add r0, r1, #0
	and r0, r0, r3
	lsl r5, r0, #2
	mov r4, #128
	lsl r4, r4, #2
	mov r9, r4
	add r0, r1, #0
	and r0, r0, r4
	lsl r0, r0, #4
	orr r5, r5, r0
	mov r6, #128
	lsl r6, r6, #1
	mov r8, r6
	and r1, r1, r6
	lsl r1, r1, #3
	orr r5, r5, r1
	ldr r0, _0808C018  @ =gPlayerYPosition
	ldrh r0, [r0]
	mov r12, r0
	ldr r1, _0808C01C  @ =gUnknown_03002EBC
	ldrh r0, [r1]
	mov r4, r12
	sub r6, r4, r0
	mov r0, sp
	ldrh r0, [r0]
	and r6, r6, r0
	and r6, r6, r2
	ldr r1, _0808C020  @ =gUnknown_03002B94
	strh r6, [r1]
	add r0, r6, #0
	and r0, r0, r3
	lsr r3, r0, #3
	orr r3, r3, r5
	add r0, r6, #0
	mov r2, r9
	and r0, r0, r2
	lsl r0, r0, #3
	orr r3, r3, r0
	add r0, r6, #0
	mov r4, r8
	and r0, r0, r4
	lsl r0, r0, #2
	orr r3, r3, r0
	ldr r0, _0808C024  @ =gUnknown_03002B9C
	strh r3, [r0]
	ldr r1, _0808C028  @ =0x000016D5
	add r0, r7, r1
	ldrb r0, [r0]
	add r4, r7, #0
	cmp r0, #0
	beq _0808C044
	ldr r2, _0808C02C  @ =0x000009C6
	add r0, r7, r2
	ldrh r0, [r0]
	cmp r0, #24
	bne _0808BFA0
	mov r3, r12
	lsl r1, r3, #16
	mov r0, #162
	lsl r0, r0, #18
	cmp r1, r0
	bne _0808BFA0
	mov r6, r10
	lsl r1, r6, #16
	ldr r0, _0808C030  @ =0x09170000
	cmp r1, r0
	ble _0808C006
_0808BFA0:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r2, [r0]
	mov r5, #240
	add r1, r5, #0
	and r1, r1, r2
	lsl r1, r1, #2
	ldr r3, _0808C034  @ =0x0000096C
	add r3, r3, r4
	mov r8, r3
	mov r7, #128
	lsl r7, r7, #2
	add r0, r7, #0
	and r0, r0, r2
	lsl r0, r0, #4
	orr r1, r1, r0
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	and r0, r0, r2
	lsl r0, r0, #3
	orr r1, r1, r0
	ldr r6, _0808C038  @ =0x000016C4
	add r0, r4, r6
	mov r6, #0
	ldrsh r2, [r0, r6]
	ldr r6, _0808C03C  @ =0x00000C8C
	add r0, r4, r6
	ldrh r0, [r0]
	sub r0, r0, #16
	sub r2, r2, r0
	sub r6, r6, #2
	add r0, r4, r6
	ldrh r0, [r0]
	and r2, r2, r0
	ldr r0, _0808C040  @ =0x0000FFF0
	and r2, r2, r0
	add r0, r2, #0
	and r0, r0, r5
	asr r0, r0, #3
	orr r1, r1, r0
	add r0, r2, #0
	and r0, r0, r7
	lsl r0, r0, #3
	orr r1, r1, r0
	and r2, r2, r3
	lsl r0, r2, #2
	orr r1, r1, r0
	mov r0, r8
	strh r1, [r0]
_0808C006:
	bl sub_0808BB88
	b _0808C128
_0808C00C:
	.4byte gRam
_0808C010:
	.4byte 0x00000C88
_0808C014:
	.4byte gUnknown_03002EBA
_0808C018:
	.4byte gPlayerYPosition
_0808C01C:
	.4byte gUnknown_03002EBC
_0808C020:
	.4byte gUnknown_03002B94
_0808C024:
	.4byte gUnknown_03002B9C
_0808C028:
	.4byte 0x000016D5
_0808C02C:
	.4byte 0x000009C6
_0808C030:
	.4byte 0x09170000
_0808C034:
	.4byte 0x0000096C
_0808C038:
	.4byte 0x000016C4
_0808C03C:
	.4byte 0x00000C8C
_0808C040:
	.4byte 0x0000FFF0
_0808C044:
	ldr r1, _0808C0BC  @ =gUnknown_03002B9C
	mov r2, #0
	ldrsh r0, [r1, r2]
	lsl r0, r0, #1
	ldr r4, _0808C0C0  @ =gUnknown_02018002
	add r0, r0, r4
	ldrh r0, [r0]
	ldr r2, _0808C0C4  @ =0x000007FF
	and r2, r2, r0
	cmp r2, #233
	beq _0808C0B6
	ldr r0, _0808C0C8  @ =0x00000149
	cmp r2, r0
	beq _0808C0F0
	add r0, r0, #32
	cmp r2, r0
	beq _0808C0F0
	mov r1, #240
	ldr r0, _0808C0CC  @ =gPlayerYPosition
	mov r2, #0
	ldrsh r0, [r0, r2]
	str r0, [sp, #4]
	ldr r4, _0808C0D0  @ =gUnknown_03002EBC
	ldrh r0, [r4]
	sub r0, r0, #16
	ldr r4, [sp, #4]
	sub r2, r4, r0
	ldr r0, _0808C0D4  @ =gUnknown_03002EBA
	ldrh r0, [r0]
	and r2, r2, r0
	ldr r0, _0808C0D8  @ =0x0000FFF0
	and r2, r2, r0
	and r1, r1, r2
	asr r1, r1, #3
	orr r5, r5, r1
	add r0, r2, #0
	mov r1, r9
	and r0, r0, r1
	lsl r0, r0, #3
	orr r5, r5, r0
	mov r4, r8
	and r2, r2, r4
	lsl r0, r2, #2
	orr r5, r5, r0
	ldr r0, _0808C0BC  @ =gUnknown_03002B9C
	strh r5, [r0]
	mov r1, #0
	ldrsh r0, [r0, r1]
	lsl r0, r0, #1
	ldr r2, _0808C0DC  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	ldr r2, _0808C0C4  @ =0x000007FF
	and r2, r2, r0
	ldr r0, _0808C0E0  @ =0x000004E9
	cmp r2, r0
	bne _0808C0E4
_0808C0B6:
	bl sub_0808BD34
	b _0808C128
_0808C0BC:
	.4byte gUnknown_03002B9C
_0808C0C0:
	.4byte gUnknown_02018002
_0808C0C4:
	.4byte 0x000007FF
_0808C0C8:
	.4byte 0x00000149
_0808C0CC:
	.4byte gPlayerYPosition
_0808C0D0:
	.4byte gUnknown_03002EBC
_0808C0D4:
	.4byte gUnknown_03002EBA
_0808C0D8:
	.4byte 0x0000FFF0
_0808C0DC:
	.4byte gUnknown_02018000
_0808C0E0:
	.4byte 0x000004E9
_0808C0E4:
	ldr r0, _0808C0F8  @ =0x00000549
	cmp r2, r0
	beq _0808C0F0
	add r0, r0, #32
	cmp r2, r0
	bne _0808C0FC
_0808C0F0:
	add r0, r2, #0
	bl sub_0808BE18
	b _0808C128
_0808C0F8:
	.4byte 0x00000549
_0808C0FC:
	ldr r4, _0808C138  @ =0x000009C6
	add r0, r7, r4
	ldrh r0, [r0]
	cmp r0, #24
	bne _0808C124
	mov r0, r12
	lsl r1, r0, #16
	mov r0, #162
	lsl r0, r0, #18
	cmp r1, r0
	bne _0808C124
	mov r2, r10
	lsl r1, r2, #16
	ldr r0, _0808C13C  @ =0x09170000
	cmp r1, r0
	bgt _0808C124
	ldr r4, _0808C140  @ =gUnknown_03002B94
	strh r6, [r4]
	ldr r6, _0808C144  @ =gUnknown_03002B9C
	strh r3, [r6]
_0808C124:
	bl sub_0808BB88
_0808C128:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0808C138:
	.4byte 0x000009C6
_0808C13C:
	.4byte 0x09170000
_0808C140:
	.4byte gUnknown_03002B94
_0808C144:
	.4byte gUnknown_03002B9C
	THUMB_FUNC_END sub_0808BED8

