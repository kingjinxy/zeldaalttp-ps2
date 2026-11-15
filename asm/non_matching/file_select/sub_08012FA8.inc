	THUMB_FUNC_START sub_08012FA8
sub_08012FA8: @ 0x08012FA8
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r0, _08013028  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	cmp r1, #0
	bne _0801301E
	add r2, r0, #0
	add r2, r2, #75
	strb r1, [r2]
	add r0, r0, #73
	strb r1, [r0]
	mov r4, #0
	ldr r2, _0801302C  @ =gUnknown_0202A880
	ldr r1, _08013030  @ =gUnknown_0202A720
_08012FC4:
	add r0, r4, r2
	strb r4, [r0]
	add r0, r4, r1
	strb r4, [r0]
	add r4, r4, #1
	cmp r4, #63
	bls _08012FC4
	mov r4, #63
	ldr r5, _0801302C  @ =gUnknown_0202A880
_08012FD6:
	bl 0x0800099C
	add r1, r4, #0
	bl __umodsi3
	add r2, r4, r5
	ldrb r3, [r2]
	add r1, r0, r5
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
	sub r4, r4, #1
	cmp r4, #0
	bne _08012FD6
	mov r4, #63
	ldr r5, _08013030  @ =gUnknown_0202A720
_08012FF6:
	bl 0x0800099C
	add r1, r4, #0
	bl __umodsi3
	add r2, r4, r5
	ldrb r3, [r2]
	add r1, r0, r5
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
	sub r4, r4, #1
	cmp r4, #0
	bne _08012FF6
	str r4, [sp]
	ldr r1, _08013034  @ =gUnknown_020309E0
	ldr r2, _08013038  @ =0x05000020
	mov r0, sp
	bl CpuSet
_0801301E:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08013028:
	.4byte gUnknown_03006C80
_0801302C:
	.4byte gUnknown_0202A880
_08013030:
	.4byte gUnknown_0202A720
_08013034:
	.4byte gUnknown_020309E0
_08013038:
	.4byte 0x05000020
	THUMB_FUNC_END sub_08012FA8

