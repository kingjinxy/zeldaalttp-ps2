	THUMB_FUNC_START sub_080B8DE4
sub_080B8DE4: @ 0x080B8DE4
	push {r4-r6,lr}
	bl sub_080B8CA0
	ldr r4, _080B8E7C  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_08126CE0
	ldr r1, _080B8E80  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080B8E0A
	b _080B8F90
_080B8E0A:
	mov r3, #0
	ldr r2, _080B8E84  @ =0x0000095C
	add r5, r4, r2
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	mov r1, #192
	lsl r1, r1, #20
	cmp r0, r1
	bne _080B8E3A
	mov r6, #163
	lsl r6, r6, #3
	add r2, r4, r6
	ldrh r0, [r2]
	mov r6, #128
	lsl r6, r6, #8
	add r1, r6, #0
	eor r0, r0, r1
	mov r6, #192
	lsl r6, r6, #8
	add r1, r6, #0
	orr r0, r0, r1
	strh r0, [r2]
_080B8E3A:
	ldrh r0, [r5]
	lsl r2, r0, #16
	asr r2, r2, #17
	ldr r5, _080B8E88  @ =0x00000B78
	add r1, r4, r5
	strh r2, [r1]
	add r0, r2, r0
	ldr r6, _080B8E8C  @ =0x00000B74
	add r1, r4, r6
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #17
	sub r5, r5, #2
	add r1, r4, r5
	strh r0, [r1]
	asr r2, r2, #1
	add r6, r6, #6
	add r0, r4, r6
	strh r2, [r0]
	ldr r1, _080B8E90  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #39
	bls _080B8EB4
	ldr r2, _080B8E94  @ =0x0000098E
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B8E9C
	ldr r0, _080B8E98  @ =gUnknown_08195F38
	b _080B8F22
_080B8E7C:
	.4byte gRam
_080B8E80:
	.4byte 0x00000996
_080B8E84:
	.4byte 0x0000095C
_080B8E88:
	.4byte 0x00000B78
_080B8E8C:
	.4byte 0x00000B74
_080B8E90:
	.4byte 0x000009AD
_080B8E94:
	.4byte 0x0000098E
_080B8E98:
	.4byte gUnknown_08195F38
_080B8E9C:
	cmp r0, #0
	blt _080B8EAC
	cmp r0, #2
	bgt _080B8EAC
	ldr r0, _080B8EA8  @ =gUnknown_08198B9C
	b _080B8F22
_080B8EA8:
	.4byte gUnknown_08198B9C
_080B8EAC:
	ldr r0, _080B8EB0  @ =gUnknown_08195F38
	b _080B8F22
_080B8EB0:
	.4byte gUnknown_08195F38
_080B8EB4:
	ldr r5, _080B8ECC  @ =0x0000098E
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bhi _080B8F24
	lsl r0, r0, #2
	ldr r1, _080B8ED0  @ =0x080B8ED4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080B8ECC:
	.4byte 0x0000098E
_080B8ED0:
	.4byte 0x080B8ED4
	.4byte _080B8EF0
	.4byte _080B8EF8
	.4byte _080B8F00
	.4byte _080B8F08
	.4byte _080B8F20
	.4byte _080B8F18
	.4byte _080B8F10
_080B8EF0:
	ldr r0, _080B8EF4  @ =gUnknown_08195F28
	b _080B8F22
_080B8EF4:
	.4byte gUnknown_08195F28
_080B8EF8:
	ldr r0, _080B8EFC  @ =gUnknown_081979A4
	b _080B8F22
_080B8EFC:
	.4byte gUnknown_081979A4
_080B8F00:
	ldr r0, _080B8F04  @ =gUnknown_081979B4
	b _080B8F22
_080B8F04:
	.4byte gUnknown_081979B4
_080B8F08:
	ldr r0, _080B8F0C  @ =gUnknown_08198BB0
	b _080B8F22
_080B8F0C:
	.4byte gUnknown_08198BB0
_080B8F10:
	ldr r0, _080B8F14  @ =gUnknown_08198C1C
	b _080B8F22
_080B8F14:
	.4byte gUnknown_08198C1C
_080B8F18:
	ldr r0, _080B8F1C  @ =gUnknown_08198BF8
	b _080B8F22
_080B8F1C:
	.4byte gUnknown_08198BF8
_080B8F20:
	ldr r0, _080B8F54  @ =gUnknown_08198BD4
_080B8F22:
	ldr r3, [r0]
_080B8F24:
	ldr r4, _080B8F58  @ =gRam
	ldr r6, _080B8F5C  @ =0x0000095A
	add r2, r4, r6
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r0, r3, #3
	add r0, r0, #192
	cmp r1, r0
	bne _080B8F6C
	ldr r2, _080B8F60  @ =0x00000A02
	add r1, r4, r2
	mov r2, #0
	mov r0, #128
	strb r0, [r1]
	ldr r3, _080B8F64  @ =0x00000A03
	add r0, r4, r3
	strb r2, [r0]
	ldr r5, _080B8F68  @ =0x000009AD
	add r1, r4, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B8F90
	.byte 0x00
	.byte 0x00
_080B8F54:
	.4byte gUnknown_08198BD4
_080B8F58:
	.4byte gRam
_080B8F5C:
	.4byte 0x0000095A
_080B8F60:
	.4byte 0x00000A02
_080B8F64:
	.4byte 0x00000A03
_080B8F68:
	.4byte 0x000009AD
_080B8F6C:
	ldrh r0, [r2]
	add r1, r0, #1
	strh r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080B8F90
	lsl r0, r1, #16
	asr r0, r0, #19
	ldr r6, _080B8FC8  @ =0x00000A04
	add r1, r4, r6
	strb r0, [r1]
	asr r0, r0, #8
	ldr r2, _080B8FCC  @ =0x00000A05
	add r1, r4, r2
	strb r0, [r1]
	bl sub_080BB340
_080B8F90:
	ldr r0, _080B8FD0  @ =gRam
	ldr r3, _080B8FD4  @ =0x00000952
	add r1, r0, r3
	ldrh r2, [r1]
	ldr r5, _080B8FD8  @ =0x00000A2C
	add r1, r0, r5
	strh r2, [r1]
	ldr r6, _080B8FDC  @ =0x00000958
	add r1, r0, r6
	ldrh r2, [r1]
	add r3, r3, #222
	add r1, r0, r3
	strh r2, [r1]
	sub r5, r5, #220
	add r1, r0, r5
	ldrh r2, [r1]
	add r6, r6, #214
	add r1, r0, r6
	strh r2, [r1]
	ldr r2, _080B8FE0  @ =0x00000956
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r3, #2
	add r0, r0, r3
	strh r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080B8FC8:
	.4byte 0x00000A04
_080B8FCC:
	.4byte 0x00000A05
_080B8FD0:
	.4byte gRam
_080B8FD4:
	.4byte 0x00000952
_080B8FD8:
	.4byte 0x00000A2C
_080B8FDC:
	.4byte 0x00000958
_080B8FE0:
	.4byte 0x00000956
	THUMB_FUNC_END sub_080B8DE4

