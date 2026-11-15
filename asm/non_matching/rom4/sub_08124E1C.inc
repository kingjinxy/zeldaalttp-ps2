	THUMB_FUNC_START sub_08124E1C
sub_08124E1C: @ 0x08124E1C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #0
	str r0, [sp]
	ldr r0, _08124E40  @ =gUnknown_020068F8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08124E44
	add r0, r5, #0
	bl sub_081251D0
	b _081251BE
_08124E40:
	.4byte gUnknown_020068F8
_08124E44:
	ldr r0, _08124F2C  @ =gRam
	ldr r1, _08124F30  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08124E80
	ldr r2, _08124F34  @ =gUnknown_020068FA
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #63
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08124F38  @ =gUnknown_020068FB
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #39
	bhi _08124E74
	mov r0, #40
	strb r0, [r1]
_08124E74:
	ldr r1, _08124F3C  @ =gUnknown_020068FC
	ldrb r0, [r1]
	cmp r0, #0
	beq _08124E80
	sub r0, r0, #1
	strb r0, [r1]
_08124E80:
	mov r2, #0
	mov r10, r2
	ldr r3, _08124F2C  @ =gRam
	mov r9, r3
	ldr r0, _08124F40  @ =0x00000E33
	add r0, r0, r9
	add r0, r0, r5
	mov r8, r0
	ldr r0, _08124F44  @ =0x00000A88
	add r0, r0, r9
	add r0, r5, r0
	str r0, [sp, #4]
_08124E98:
	add r0, r5, #0
	mov r1, r10
	bl sub_08124984
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	beq _08124EAC
	sub r0, r0, #1
	strb r0, [r1]
_08124EAC:
	ldr r0, _08124F48  @ =0x00000E1F
	add r0, r0, r9
	add r6, r5, r0
	ldrb r4, [r6]
	cmp r4, #0
	bne _08124F68
	ldr r2, _08124F4C  @ =gUnknown_081804D0
	mov r3, r10
	lsl r0, r3, #2
	add r0, r0, r2
	ldrh r1, [r0]
	lsl r7, r3, #1
	add r0, r7, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	sub r2, r2, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r5, #0
	mov r3, #8
	bl sub_080BF3F0
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp]
	ldr r2, _08124F50  @ =0x00000DBB
	add r2, r2, r9
	add r2, r5, r2
	mov r1, r10
	lsl r0, r0, r1
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	beq _08124EFA
	b _08125184
_08124EFA:
	mov r0, #1
	strb r0, [r6]
	ldr r0, _08124F54  @ =gUnknown_081804E0
	add r0, r7, r0
	ldrh r0, [r0]
	mov r2, r8
	strb r0, [r2]
	ldr r0, _08124F58  @ =0x00000DF7
	add r0, r0, r9
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _08124F5C  @ =0x00000DED
	add r0, r0, r9
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _08124F60  @ =0x00000E01
	add r0, r0, r9
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _08124F64  @ =0x00000E0B
	add r0, r0, r9
	add r0, r5, r0
	strb r4, [r0]
	b _08125184
	.byte 0x00
	.byte 0x00
_08124F2C:
	.4byte gRam
_08124F30:
	.4byte 0x00000996
_08124F34:
	.4byte gUnknown_020068FA
_08124F38:
	.4byte gUnknown_020068FB
_08124F3C:
	.4byte gUnknown_020068FC
_08124F40:
	.4byte 0x00000E33
_08124F44:
	.4byte 0x00000A88
_08124F48:
	.4byte 0x00000E1F
_08124F4C:
	.4byte gUnknown_081804D0
_08124F50:
	.4byte 0x00000DBB
_08124F54:
	.4byte gUnknown_081804E0
_08124F58:
	.4byte 0x00000DF7
_08124F5C:
	.4byte 0x00000DED
_08124F60:
	.4byte 0x00000E01
_08124F64:
	.4byte 0x00000E0B
_08124F68:
	cmp r4, #1
	bne _08124FE0
	mov r3, r8
	ldrb r0, [r3]
	cmp r0, #64
	bls _08124F82
	cmp r0, #65
	bne _08124F8A
	add r0, r5, #0
	mov r1, #78
	bl sub_080C19F8
	b _08124F8A
_08124F82:
	ldr r1, [sp, #4]
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_08124F8A:
	ldr r3, _08124FCC  @ =gRam
	mov r2, r8
	ldrb r0, [r2]
	cmp r0, #0
	bne _08124FA2
	ldr r1, [sp, #4]
	strb r0, [r1]
	ldr r0, [sp]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp]
_08124FA2:
	ldr r2, [sp]
	cmp r2, #4
	beq _08124FAA
	b _08125184
_08124FAA:
	ldr r0, _08124FD0  @ =0x00000A3E
	add r1, r3, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _08124FD4  @ =0x00000E15
	add r0, r3, r1
	add r0, r5, r0
	mov r2, #0
	strb r2, [r0]
	ldr r0, _08124FD8  @ =0x00001898
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08124FDC  @ =0x00001770
	add r0, r3, r1
	strb r2, [r0]
	b _081251BE
_08124FCC:
	.4byte gRam
_08124FD0:
	.4byte 0x00000A3E
_08124FD4:
	.4byte 0x00000E15
_08124FD8:
	.4byte 0x00001898
_08124FDC:
	.4byte 0x00001770
_08124FE0:
	cmp r4, #2
	beq _08124FE6
	b _08125130
_08124FE6:
	ldr r0, _0812501C  @ =gUnknown_020068FA
	mov r2, r10
	lsl r1, r2, #4
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #63
	and r1, r1, r0
	ldr r0, _08125020  @ =gUnknown_020068FB
	ldrb r0, [r0]
	mov r4, #151
	lsl r4, r4, #4
	add r4, r4, r9
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C06EC
	ldr r0, _08125024  @ =0x00000964
	add r0, r0, r9
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	bne _08125028
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r9
	ldrh r0, [r0]
	b _08125034
_0812501C:
	.4byte gUnknown_020068FA
_08125020:
	.4byte gUnknown_020068FB
_08125024:
	.4byte 0x00000964
_08125028:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r9
	mov r1, #0
	ldrsh r0, [r0, r1]
	neg r0, r0
_08125034:
	strh r0, [r4]
	ldr r2, _0812506C  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	ldr r3, _08125070  @ =0x00001170
	add r0, r3, #0
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _08125074  @ =0x0000096C
	add r0, r2, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r4, r2, #0
	cmp r0, #0
	bne _0812507C
	sub r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _08125078  @ =0x00000974
	add r0, r4, r2
	strh r1, [r0]
	b _0812508C
	.byte 0x00
	.byte 0x00
_0812506C:
	.4byte gRam
_08125070:
	.4byte 0x00001170
_08125074:
	.4byte 0x0000096C
_08125078:
	.4byte 0x00000974
_0812507C:
	ldr r3, _08125104  @ =0x00000968
	add r0, r4, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	neg r0, r0
	ldr r2, _08125108  @ =0x00000974
	add r1, r4, r2
	strh r0, [r1]
_0812508C:
	ldr r3, _08125108  @ =0x00000974
	add r1, r4, r3
	ldr r2, _0812510C  @ =0x00001575
	add r0, r2, #0
	ldrh r1, [r1]
	add r0, r0, r1
	sub r3, r3, #16
	add r1, r4, r3
	mov r6, #0
	strh r0, [r1]
	add r0, r5, #0
	bl sub_080ABA78
	ldr r0, _08125110  @ =gUnknown_020068FC
	ldrb r0, [r0]
	cmp r0, #0
	bne _08125184
	ldr r0, _08125114  @ =0x00001770
	add r2, r4, r0
	strb r6, [r2]
	mov r3, #182
	lsl r3, r3, #5
	add r1, r4, r3
	ldr r3, _08125118  @ =0xFFFFEE8F
	add r0, r3, #0
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #14
	bhi _08125184
	ldr r1, _0812511C  @ =0x000016C4
	add r0, r4, r1
	mov r3, #0
	ldrsh r1, [r0, r3]
	ldr r0, _08125120  @ =0x00001570
	cmp r1, r0
	ble _08125184
	add r0, r0, #15
	cmp r1, r0
	bgt _08125184
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08125124  @ =gUnknown_020068FA
	ldrb r0, [r0]
	cmp r0, #0
	bne _08125184
	ldr r0, _08125128  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _0812512C  @ =0x00000E1F
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	mov r0, #32
	mov r2, r8
	strb r0, [r2]
	b _08125184
_08125104:
	.4byte 0x00000968
_08125108:
	.4byte 0x00000974
_0812510C:
	.4byte 0x00001575
_08125110:
	.4byte gUnknown_020068FC
_08125114:
	.4byte 0x00001770
_08125118:
	.4byte 0xFFFFEE8F
_0812511C:
	.4byte 0x000016C4
_08125120:
	.4byte 0x00001570
_08125124:
	.4byte gUnknown_020068FA
_08125128:
	.4byte 0x00000A3E
_0812512C:
	.4byte 0x00000E1F
_08125130:
	cmp r4, #3
	beq _0812516C
	cmp r4, #4
	bne _08125184
	ldr r0, _08125164  @ =0x000016C4
	add r0, r0, r9
	ldrh r1, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r9
	ldrh r2, [r0]
	add r0, r5, #0
	mov r3, #6
	bl sub_080BF3F0
	mov r3, r8
	ldrb r2, [r3]
	cmp r2, #0
	bne _08125184
	ldr r0, _08125168  @ =gUnknown_020068F8
	mov r1, #1
	strb r1, [r0]
	sub r0, r0, #120
	strh r2, [r0]
	b _081251BE
	.byte 0x00
	.byte 0x00
_08125164:
	.4byte 0x000016C4
_08125168:
	.4byte gUnknown_020068F8
_0812516C:
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	bne _08125184
	mov r0, #4
	strb r0, [r6]
	mov r0, #96
	strb r0, [r1]
	mov r0, #79
	mov r1, #0
	bl sub_0812A324
_08125184:
	add r0, r5, #0
	bl sub_080C1768
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF804
	add r0, r5, #0
	mov r1, r10
	bl sub_081252B4
	add r0, r5, #0
	bl sub_08122390
	add r0, r5, #0
	mov r1, r10
	bl sub_08124A8C
	mov r0, r10
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	cmp r0, #3
	bhi _081251BE
	b _08124E98
_081251BE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08124E1C

	.byte 0x00
	.byte 0x00
