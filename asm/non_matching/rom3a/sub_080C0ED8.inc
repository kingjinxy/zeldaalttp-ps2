	THUMB_FUNC_START sub_080C0ED8
sub_080C0ED8: @ 0x080C0ED8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	bl sub_080C0E34
	mov r0, #0
	mov r10, r0
	ldr r1, _080C0F48  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r2, r1, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _080C0F0A
	b _080C108E
_080C0F0A:
	mov r9, r2
	mov r5, #128
	mov r8, r5
	ldr r7, _080C0F4C  @ =0x000001FF
	mov r12, r7
	add r6, r1, #0
_080C0F16:
	ldr r1, _080C0F50  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, r10
	lsl r0, r0, #3
	ldr r2, _080C0F54  @ =gUnknown_03002780
	add r4, r0, r2
	mov r3, r9
	mov r0, #0
	ldrsb r0, [r3, r0]
	mov r5, r8
	and r0, r0, r5
	cmp r0, #0
	beq _080C0F5C
	ldrh r2, [r4, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	mov r0, #255
	and r1, r1, r0
	mov r7, r12
	and r1, r1, r7
	ldr r0, _080C0F58  @ =0xFFFFFE00
	and r0, r0, r2
	orr r0, r0, r1
	strh r0, [r4, #2]
	b _080C0FA2
_080C0F48:
	.4byte gRam
_080C0F4C:
	.4byte 0x000001FF
_080C0F50:
	.4byte gUnknown_03003E74
_080C0F54:
	.4byte gUnknown_03002780
_080C0F58:
	.4byte 0xFFFFFE00
_080C0F5C:
	ldrh r0, [r4, #2]
	lsl r0, r0, #23
	lsr r3, r0, #23
	ldr r0, _080C0F78  @ =gUnknown_03002BA5
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080C0F7C
	mov r2, #128
	lsl r2, r2, #1
	orr r2, r2, r3
	b _080C0F7E
	.byte 0x00
	.byte 0x00
_080C0F78:
	.4byte gUnknown_03002BA5
_080C0F7C:
	add r2, r3, #0
_080C0F7E:
	mov r1, r12
	and r2, r2, r1
	ldrh r1, [r4, #2]
	ldr r0, _080C10A0  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r2
	strh r0, [r4, #2]
	ldr r2, _080C10A4  @ =gUnknown_03002BA5
	ldrb r1, [r2]
	lsr r1, r1, #1
	mov r0, #1
	and r1, r1, r0
	lsl r1, r1, #6
	ldrb r2, [r4, #3]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #3]
_080C0FA2:
	ldr r5, _080C10A8  @ =gRam
	ldrb r1, [r4, #2]
	ldr r3, _080C10A8  @ =gRam
	ldr r7, _080C10AC  @ =0x0000096D
	add r0, r3, r7
	ldrb r0, [r0]
	sub r0, r1, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r1, #0
	mov r2, r8
	and r0, r0, r2
	mov r3, #0
	cmp r0, #0
	beq _080C0FC2
	mov r3, #255
_080C0FC2:
	add r2, r5, #0
	ldr r7, _080C10B0  @ =0x00000964
	add r0, r2, r7
	ldrb r0, [r0]
	add r0, r1, r0
	ldr r1, _080C10B4  @ =gUnknown_03002B98
	strb r0, [r1]
	add r7, r7, #1
	add r0, r2, r7
	ldrb r0, [r0]
	add r0, r0, r3
	ldr r3, _080C10B8  @ =0x00000969
	add r1, r2, r3
	strb r0, [r1]
	mov r3, #0
	ldr r7, _080C10B4  @ =gUnknown_03002B98
	mov r0, #0
	ldrsh r7, [r7, r0]
	ldr r1, _080C10BC  @ =gUnknown_03002B82
	mov r2, #0
	ldrsh r0, [r1, r2]
	sub r1, r7, r0
	cmp r1, #255
	ble _080C0FF4
	mov r3, #1
_080C0FF4:
	cmp r3, #0
	beq _080C1010
	ldrh r2, [r4, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	mov r0, #128
	lsl r0, r0, #1
	orr r1, r1, r0
	mov r3, r12
	and r1, r1, r3
	ldr r0, _080C10A0  @ =0xFFFFFE00
	and r0, r0, r2
	orr r0, r0, r1
	strh r0, [r4, #2]
_080C1010:
	ldrb r2, [r4]
	ldr r7, _080C10C0  @ =0x0000096C
	add r0, r5, r7
	ldrb r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r0, r2, #0
	mov r1, r8
	and r0, r0, r1
	mov r1, #0
	cmp r0, #0
	beq _080C102C
	mov r1, #255
_080C102C:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r6, r3
	ldrb r0, [r0]
	add r0, r2, r0
	ldr r5, _080C10C4  @ =gUnknown_03002BA1
	strb r0, [r5]
	ldr r7, _080C10C8  @ =0x00000961
	add r0, r6, r7
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r1, _080C10CC  @ =0x00000974
	add r2, r6, r1
	strb r0, [r2]
	ldrb r1, [r5]
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	mov r2, #0
	mov r3, #128
	lsl r3, r3, #13
	add r1, r1, r3
	asr r1, r1, #16
	ldr r5, _080C10D0  @ =gUnknown_03002B88
	mov r7, #0
	ldrsh r0, [r5, r7]
	sub r1, r1, r0
	cmp r1, #255
	ble _080C106A
	mov r2, #1
_080C106A:
	cmp r2, #0
	beq _080C107A
	ldrh r0, [r4, #2]
	ldr r1, _080C10A0  @ =0xFFFFFE00
	and r1, r1, r0
	mov r0, #240
	orr r1, r1, r0
	strh r1, [r4, #2]
_080C107A:
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r2, #1
	add r10, r10, r2
	lsl r0, r0, #24
	cmp r0, #0
	blt _080C108E
	b _080C0F16
_080C108E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C10A0:
	.4byte 0xFFFFFE00
_080C10A4:
	.4byte gUnknown_03002BA5
_080C10A8:
	.4byte gRam
_080C10AC:
	.4byte 0x0000096D
_080C10B0:
	.4byte 0x00000964
_080C10B4:
	.4byte gUnknown_03002B98
_080C10B8:
	.4byte 0x00000969
_080C10BC:
	.4byte gUnknown_03002B82
_080C10C0:
	.4byte 0x0000096C
_080C10C4:
	.4byte gUnknown_03002BA1
_080C10C8:
	.4byte 0x00000961
_080C10CC:
	.4byte 0x00000974
_080C10D0:
	.4byte gUnknown_03002B88
	THUMB_FUNC_END sub_080C0ED8

