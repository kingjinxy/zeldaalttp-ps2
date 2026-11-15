	THUMB_FUNC_START sub_0807DFD4
sub_0807DFD4: @ 0x0807DFD4
	push {r4,lr}
	ldr r0, _0807E008  @ =gRam
	ldr r2, _0807E00C  @ =0x000009E7
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #27
	bne _0807E018
	ldr r4, _0807E010  @ =0x000009DA
	add r0, r3, r4
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r1, _0807E014  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807E018
	sub r2, r2, #119
	add r0, r3, r2
	mov r4, #0
	ldrsh r0, [r0, r4]
	b _0807E03C
	.byte 0x00
	.byte 0x00
_0807E008:
	.4byte gRam
_0807E00C:
	.4byte 0x000009E7
_0807E010:
	.4byte 0x000009DA
_0807E014:
	.4byte gUnknown_02002000
_0807E018:
	ldr r1, _0807E048  @ =0x000009E7
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #25
	bne _0807E058
	ldr r2, _0807E04C  @ =0x00000AA8
	add r0, r3, r2
	ldr r1, _0807E050  @ =gUnknown_081676B2
	ldrh r2, [r0]
	ldrh r0, [r1, #8]
	and r0, r0, r2
	cmp r0, #0
	beq _0807E058
	mov r4, #151
	lsl r4, r4, #4
	add r0, r3, r4
	mov r1, #0
	ldrsh r0, [r0, r1]
_0807E03C:
	ldr r1, _0807E054  @ =gUnknown_08165B4C
	mov r2, #5
	bl sub_0807BC4C
	b _0807E072
	.byte 0x00
	.byte 0x00
_0807E048:
	.4byte 0x000009E7
_0807E04C:
	.4byte 0x00000AA8
_0807E050:
	.4byte gUnknown_081676B2
_0807E054:
	.4byte gUnknown_08165B4C
_0807E058:
	mov r4, #151
	lsl r4, r4, #4
	add r2, r3, r4
	ldrh r1, [r2]
	ldr r4, _0807E078  @ =0x00000B24
	add r0, r3, r4
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	ldr r1, _0807E07C  @ =gUnknown_08165B34
	mov r2, #3
	bl sub_0807BC4C
_0807E072:
	pop {r4}
	pop {r0}
	bx r0
_0807E078:
	.4byte 0x00000B24
_0807E07C:
	.4byte gUnknown_08165B34
	THUMB_FUNC_END sub_0807DFD4

