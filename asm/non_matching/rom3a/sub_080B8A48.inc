	THUMB_FUNC_START sub_080B8A48
sub_080B8A48: @ 0x080B8A48
	push {r4-r6,lr}
	sub sp, sp, #8
	mov r0, sp
	mov r5, #0
	strh r5, [r0]
	ldr r1, _080B8BC0  @ =0x06008000
	ldr r2, _080B8BC4  @ =0x01001000
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _080B8BC8  @ =0x06004000
	ldr r2, _080B8BCC  @ =0x01002000
	bl CpuSet
	ldr r4, _080B8BD0  @ =gRam
	ldr r0, _080B8BD4  @ =0x0000050C
	add r2, r4, r0
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #4
	add r1, r3, #0
	orr r0, r0, r1
	mov r6, #0
	orr r0, r0, r5
	ldr r1, _080B8BD8  @ =0x000099FF
	and r0, r0, r1
	strh r0, [r2]
	ldr r0, _080B8BDC  @ =0x0000051A
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _080B8BE0  @ =0x0000FFDF
	and r0, r0, r1
	strh r0, [r2]
	bl sub_081293B0
	bl sub_080B82B4
	bl sub_08126A1C
	mov r1, #163
	lsl r1, r1, #3
	add r2, r4, r1
	ldrh r0, [r2]
	mov r3, #192
	lsl r3, r3, #8
	add r1, r3, #0
	eor r0, r0, r1
	mov r3, #128
	lsl r3, r3, #8
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #202
	lsl r0, r0, #4
	add r2, r4, r0
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	strh r0, [r2]
	ldr r1, _080B8BE4  @ =0x00000CAA
	add r0, r4, r1
	mov r5, #1
	strb r5, [r0]
	bl sub_08130384
	add r0, sp, #4
	strh r6, [r0]
	ldr r1, _080B8BE8  @ =gUnknown_02000C00
	ldr r2, _080B8BEC  @ =0x01000200
	bl CpuSet
	mov r0, sp
	add r0, r0, #6
	strh r6, [r0]
	ldr r1, _080B8BF0  @ =gUnknown_02000840
	ldr r2, _080B8BF4  @ =0x01000010
	bl CpuSet
	ldr r0, _080B8BF8  @ =gUnknown_02000A00
	ldr r1, _080B8BFC  @ =gUnknown_02010740
	mov r2, #128
	lsl r2, r2, #1
	bl CpuSet
	ldr r3, _080B8C00  @ =0x0000099B
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B8C04  @ =0x0000051E
	add r4, r4, r0
	strh r6, [r4]
	ldr r0, _080B8C08  @ =gUnknown_020023D6
	strh r6, [r0]
	ldr r2, _080B8C0C  @ =gUnknown_020023E8
	ldr r1, _080B8C10  @ =gUnknown_020023EA
	ldrh r0, [r2]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r2]
	ldr r1, _080B8C14  @ =gUnknown_020023EC
	strh r0, [r1]
	ldr r0, _080B8C18  @ =gUnknown_020023F3
	strb r5, [r0]
	mov r2, #12
	ldr r5, _080B8C1C  @ =0x000003E6
	ldr r4, _080B8C20  @ =gUnknown_020023CE
	ldr r6, _080B8C24  @ =0x000003E7
	add r3, r6, #0
_080B8B2A:
	lsl r0, r2, #1
	add r0, r0, r4
	ldrh r0, [r0]
	ldrh r6, [r1]
	add r0, r0, r6
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r5
	bls _080B8B40
	strh r3, [r1]
_080B8B40:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080B8B2A
	ldr r6, _080B8BD0  @ =gRam
	ldr r0, _080B8C28  @ =0x0000165C
	add r1, r6, r0
	mov r4, #0
	mov r5, #0
	mov r0, #64
	strh r0, [r1]
	bl sub_080BE220
	ldr r3, _080B8C2C  @ =0x000009B4
	add r1, r6, r3
	mov r0, #22
	strb r0, [r1]
	ldr r1, _080B8C30  @ =0x00000A02
	add r0, r6, r1
	strb r4, [r0]
	add r3, r3, #79
	add r1, r6, r3
	mov r0, #104
	strb r0, [r1]
	ldr r1, _080B8C34  @ =0x00000A04
	add r0, r6, r1
	strb r4, [r0]
	add r3, r3, #2
	add r0, r6, r3
	strb r4, [r0]
	add r1, r1, #2
	add r0, r6, r1
	strb r4, [r0]
	add r3, r3, #2
	add r0, r6, r3
	strb r4, [r0]
	ldr r0, _080B8C38  @ =0x00000958
	add r1, r6, r0
	ldr r0, _080B8C3C  @ =0x0000FFB8
	strh r0, [r1]
	sub r3, r3, #181
	add r1, r6, r3
	mov r0, #144
	strh r0, [r1]
	bl sub_080BB340
	ldr r0, _080B8C40  @ =0x0000095E
	add r1, r6, r0
	ldr r0, _080B8C44  @ =0x0000FFE0
	strh r0, [r1]
	ldr r1, _080B8C48  @ =0x0000095C
	add r0, r6, r1
	strh r5, [r0]
	ldr r3, _080B8C4C  @ =0x000009AD
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #39
	bls _080B8C54
	ldr r0, _080B8C50  @ =0x00000A3C
	add r1, r6, r0
	mov r0, #33
	b _080B8C5A
	.byte 0x00
	.byte 0x00
_080B8BC0:
	.4byte 0x06008000
_080B8BC4:
	.4byte 0x01001000
_080B8BC8:
	.4byte 0x06004000
_080B8BCC:
	.4byte 0x01002000
_080B8BD0:
	.4byte gRam
_080B8BD4:
	.4byte 0x0000050C
_080B8BD8:
	.4byte 0x000099FF
_080B8BDC:
	.4byte 0x0000051A
_080B8BE0:
	.4byte 0x0000FFDF
_080B8BE4:
	.4byte 0x00000CAA
_080B8BE8:
	.4byte gUnknown_02000C00
_080B8BEC:
	.4byte 0x01000200
_080B8BF0:
	.4byte gUnknown_02000840
_080B8BF4:
	.4byte 0x01000010
_080B8BF8:
	.4byte gUnknown_02000A00
_080B8BFC:
	.4byte gUnknown_02010740
_080B8C00:
	.4byte 0x0000099B
_080B8C04:
	.4byte 0x0000051E
_080B8C08:
	.4byte gUnknown_020023D6
_080B8C0C:
	.4byte gUnknown_020023E8
_080B8C10:
	.4byte gUnknown_020023EA
_080B8C14:
	.4byte gUnknown_020023EC
_080B8C18:
	.4byte gUnknown_020023F3
_080B8C1C:
	.4byte 0x000003E6
_080B8C20:
	.4byte gUnknown_020023CE
_080B8C24:
	.4byte 0x000003E7
_080B8C28:
	.4byte 0x0000165C
_080B8C2C:
	.4byte 0x000009B4
_080B8C30:
	.4byte 0x00000A02
_080B8C34:
	.4byte 0x00000A04
_080B8C38:
	.4byte 0x00000958
_080B8C3C:
	.4byte 0x0000FFB8
_080B8C40:
	.4byte 0x0000095E
_080B8C44:
	.4byte 0x0000FFE0
_080B8C48:
	.4byte 0x0000095C
_080B8C4C:
	.4byte 0x000009AD
_080B8C50:
	.4byte 0x00000A3C
_080B8C54:
	ldr r3, _080B8C8C  @ =0x00000A3C
	add r1, r6, r3
	mov r0, #32
_080B8C5A:
	strh r0, [r1]
	ldr r1, _080B8C90  @ =gRam
	ldr r6, _080B8C94  @ =0x000009D3
	add r2, r1, r6
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080B8C98  @ =0x000009D4
	add r2, r1, r0
	mov r0, #162
	strb r0, [r2]
	ldr r3, _080B8C9C  @ =0x000009E8
	add r2, r1, r3
	mov r3, #0
	mov r0, #64
	strh r0, [r2]
	sub r6, r6, #54
	add r1, r1, r6
	strb r3, [r1]
	mov r0, #4
	bl sub_0806BD6C
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
_080B8C8C:
	.4byte 0x00000A3C
_080B8C90:
	.4byte gRam
_080B8C94:
	.4byte 0x000009D3
_080B8C98:
	.4byte 0x000009D4
_080B8C9C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080B8A48

