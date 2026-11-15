	THUMB_FUNC_START sub_0812BB04
sub_0812BB04: @ 0x0812BB04
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r5, r1, #24
	ldrb r3, [r4]
	cmp r3, #2
	beq _0812BB88
	cmp r3, #2
	bgt _0812BB1C
	cmp r3, #1
	beq _0812BB26
	b _0812BC54
_0812BB1C:
	cmp r3, #3
	beq _0812BBB4
	cmp r3, #4
	beq _0812BC08
	b _0812BC54
_0812BB26:
	ldr r1, _0812BB54  @ =0x04000060
	ldr r0, [r4, #84]
	ldrb r0, [r0, #8]
	strb r0, [r1]
	ldr r2, _0812BB58  @ =0x04000064
	ldr r0, [r4, #12]
	mov r6, #128
	lsl r6, r6, #8
	add r1, r6, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0812BB5C  @ =0x04000063
	strb r5, [r0]
	ldr r0, [r4, #84]
	ldrb r0, [r0, #1]
	and r3, r3, r0
	cmp r3, #0
	beq _0812BB64
	ldr r1, _0812BB60  @ =0x04000062
	ldr r0, [r4, #100]
	ldrb r0, [r0, #2]
	b _0812BB6C
	.byte 0x00
	.byte 0x00
_0812BB54:
	.4byte 0x04000060
_0812BB58:
	.4byte 0x04000064
_0812BB5C:
	.4byte 0x04000063
_0812BB60:
	.4byte 0x04000062
_0812BB64:
	ldr r1, _0812BB80  @ =0x04000062
	add r0, r4, #0
	add r0, r0, #100
	ldrb r0, [r0]
_0812BB6C:
	lsl r0, r0, #6
	strb r0, [r1]
	ldr r0, _0812BB84  @ =0x04000064
	ldr r1, [r4, #12]
	mov r3, #128
	lsl r3, r3, #8
	add r2, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0812BC54
_0812BB80:
	.4byte 0x04000062
_0812BB84:
	.4byte 0x04000064
_0812BB88:
	ldr r0, _0812BBA8  @ =0x04000069
	strb r5, [r0]
	ldr r2, _0812BBAC  @ =0x0400006C
	ldr r0, [r4, #12]
	mov r6, #128
	lsl r6, r6, #8
	add r1, r6, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0812BBB0  @ =0x04000068
	add r0, r4, #0
	add r0, r0, #100
	ldrb r0, [r0]
	lsl r0, r0, #6
	b _0812BC52
	.byte 0x00
	.byte 0x00
_0812BBA8:
	.4byte 0x04000069
_0812BBAC:
	.4byte 0x0400006C
_0812BBB0:
	.4byte 0x04000068
_0812BBB4:
	ldr r6, _0812BBF4  @ =gUnknown_03000164
	ldr r1, [r4, #100]
	ldr r0, [r6]
	cmp r1, r0
	beq _0812BBD2
	ldr r1, _0812BBF8  @ =0x04000070
	mov r0, #0
	strb r0, [r1]
	ldr r0, [r4, #100]
	add r1, r1, #32
	mov r2, #8
	bl CpuSet
	ldr r0, [r4, #100]
	str r0, [r6]
_0812BBD2:
	ldr r1, _0812BBF8  @ =0x04000070
	mov r0, #192
	strb r0, [r1]
	ldr r2, _0812BBFC  @ =0x04000074
	ldr r0, [r4, #12]
	mov r3, #128
	lsl r3, r3, #8
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0812BC00  @ =0x04000073
	ldr r0, _0812BC04  @ =gUnknown_08198EC0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r1, r1, #1
	b _0812BC50
_0812BBF4:
	.4byte gUnknown_03000164
_0812BBF8:
	.4byte 0x04000070
_0812BBFC:
	.4byte 0x04000074
_0812BC00:
	.4byte 0x04000073
_0812BC04:
	.4byte gUnknown_08198EC0
_0812BC08:
	ldr r0, _0812BC28  @ =0x04000079
	strb r5, [r0]
	ldr r0, [r4, #84]
	ldrb r1, [r0, #1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812BC2C
	ldrh r0, [r4, #12]
	bl sub_0812AED0
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, [r4, #100]
	ldrb r0, [r0, #2]
	b _0812BC3C
_0812BC28:
	.4byte 0x04000079
_0812BC2C:
	ldrh r0, [r4, #12]
	bl sub_0812AED0
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r4, #0
	add r0, r0, #100
	ldrb r0, [r0]
_0812BC3C:
	cmp r0, #0
	beq _0812BC44
	mov r0, #8
	orr r1, r1, r0
_0812BC44:
	ldr r0, _0812BC5C  @ =0x0400007C
	strb r1, [r0]
	ldr r1, _0812BC60  @ =0x0400007D
	mov r0, #128
	strb r0, [r1]
	sub r1, r1, #5
_0812BC50:
	mov r0, #0
_0812BC52:
	strb r0, [r1]
_0812BC54:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812BC5C:
	.4byte 0x0400007C
_0812BC60:
	.4byte 0x0400007D
	THUMB_FUNC_END sub_0812BB04

