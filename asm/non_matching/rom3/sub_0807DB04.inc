	THUMB_FUNC_START sub_0807DB04
sub_0807DB04: @ 0x0807DB04
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r4, _0807DC28  @ =gRam
	ldr r0, _0807DC2C  @ =0x000009EA
	add r3, r4, r0
	ldrh r0, [r3]
	ldr r2, _0807DC30  @ =gUnknown_08167934
	lsl r1, r0, #1
	add r0, r1, r2
	ldrh r0, [r0]
	mov r9, r0
	mov r5, #0
	mov r12, r5
	strh r0, [r3]
	ldr r3, _0807DC34  @ =gUnknown_0816793C
	add r1, r1, r3
	ldrh r1, [r1]
	ldr r6, _0807DC38  @ =0x00000BF8
	add r0, r4, r6
	strh r1, [r0]
	ldr r7, _0807DC3C  @ =0x000009EE
	add r1, r4, r7
	ldrh r0, [r1]
	lsl r0, r0, #1
	add r2, r0, r2
	ldrh r6, [r2]
	strh r6, [r1]
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r2, _0807DC40  @ =0x00000BF6
	add r1, r4, r2
	strh r0, [r1]
	sub r0, r0, #24
	ldr r3, _0807DC44  @ =0x00000BFA
	add r1, r4, r3
	strh r0, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r4
	mov r8, r5
	ldrh r5, [r5]
	mov r1, #126
	and r1, r1, r5
	lsl r1, r1, #2
	ldr r7, _0807DC48  @ =0x00000BA8
	add r2, r4, r7
	mov r3, r9
	lsl r0, r3, #4
	ldrh r2, [r2]
	add r0, r0, r2
	add r1, r1, r0
	add r7, r7, #74
	add r0, r4, r7
	strh r1, [r0]
	mov r1, #252
	lsl r1, r1, #5
	and r1, r1, r5
	lsr r1, r1, #4
	ldr r0, _0807DC4C  @ =0x00000BAA
	add r2, r4, r0
	lsl r0, r6, #4
	ldrh r2, [r2]
	add r0, r0, r2
	add r1, r1, r0
	ldr r2, _0807DC50  @ =0x00000BF4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _0807DC54  @ =0x00000AA8
	add r0, r4, r3
	ldr r1, _0807DC58  @ =gUnknown_081676B2
	ldrh r2, [r0]
	ldrh r0, [r1, #8]
	and r0, r0, r2
	cmp r0, #0
	beq _0807DC84
	ldr r7, _0807DC5C  @ =0x000009E7
	add r1, r4, r7
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0807DC60  @ =0x00000ABA
	add r0, r4, r1
	mov r2, r12
	strh r2, [r0]
	ldr r7, _0807DC64  @ =0x00000AE8
	add r3, r4, r7
	ldrh r1, [r3]
	ldr r2, _0807DC68  @ =0x00000AE6
	add r0, r4, r2
	strh r1, [r0]
	add r7, r7, #2
	add r2, r4, r7
	ldrh r1, [r2]
	add r7, r7, #4
	add r0, r4, r7
	strh r1, [r0]
	mov r0, r12
	strh r0, [r3]
	strh r0, [r2]
	ldr r1, _0807DC6C  @ =0x00000B56
	add r2, r4, r1
	ldrh r1, [r2]
	ldr r3, _0807DC70  @ =0x00000B46
	add r0, r4, r3
	strh r1, [r0]
	mov r7, r12
	strh r7, [r2]
	mov r1, r9
	sub r1, r1, #1
	lsl r1, r1, #2
	ldr r0, _0807DC74  @ =0x0000097C
	add r3, r4, r0
	strh r1, [r3]
	sub r0, r6, #1
	mov r6, #150
	lsl r6, r6, #4
	add r2, r4, r6
	strh r0, [r2]
	ldr r7, _0807DC78  @ =0x00000961
	add r0, r4, r7
	ldrb r0, [r0]
	strb r0, [r3]
	ldrb r2, [r2]
	add r6, r6, #29
	add r0, r4, r6
	strb r2, [r0]
	add r1, r5, r1
	ldrh r3, [r3]
	add r1, r1, r3
	mov r7, r8
	strh r1, [r7]
	bl sub_0807D9F8
	mov r1, sp
	mov r2, #246
	lsl r2, r2, #1
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _0807DC7C  @ =gUnknown_0201A000
	ldr r2, _0807DC80  @ =0x01001000
	mov r0, sp
	bl CpuSet
	b _0807DC8C
_0807DC28:
	.4byte gRam
_0807DC2C:
	.4byte 0x000009EA
_0807DC30:
	.4byte gUnknown_08167934
_0807DC34:
	.4byte gUnknown_0816793C
_0807DC38:
	.4byte 0x00000BF8
_0807DC3C:
	.4byte 0x000009EE
_0807DC40:
	.4byte 0x00000BF6
_0807DC44:
	.4byte 0x00000BFA
_0807DC48:
	.4byte 0x00000BA8
_0807DC4C:
	.4byte 0x00000BAA
_0807DC50:
	.4byte 0x00000BF4
_0807DC54:
	.4byte 0x00000AA8
_0807DC58:
	.4byte gUnknown_081676B2
_0807DC5C:
	.4byte 0x000009E7
_0807DC60:
	.4byte 0x00000ABA
_0807DC64:
	.4byte 0x00000AE8
_0807DC68:
	.4byte 0x00000AE6
_0807DC6C:
	.4byte 0x00000B56
_0807DC70:
	.4byte 0x00000B46
_0807DC74:
	.4byte 0x0000097C
_0807DC78:
	.4byte 0x00000961
_0807DC7C:
	.4byte gUnknown_0201A000
_0807DC80:
	.4byte 0x01001000
_0807DC84:
	ldr r3, _0807DC9C  @ =0x00001812
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
_0807DC8C:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807DC9C:
	.4byte 0x00001812
	THUMB_FUNC_END sub_0807DB04

