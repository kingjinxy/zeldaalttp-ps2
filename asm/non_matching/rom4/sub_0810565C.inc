	THUMB_FUNC_START sub_0810565C
sub_0810565C: @ 0x0810565C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r5, #5
	ldr r0, _08105710  @ =gUnknown_0817BE90
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r4, _08105714  @ =gRam
	ldr r0, _08105718  @ =0x00001622
	add r0, r0, r4
	mov r8, r0
	ldr r1, _0810571C  @ =0x00001623
	add r1, r1, r4
	mov r12, r1
	ldr r7, _08105720  @ =0x00001624
	add r7, r7, r4
	mov r9, r7
	ldr r0, _08105724  @ =0x00001625
	add r6, r4, r0
_08105688:
	ldr r7, _08105728  @ =gUnknown_0200EC18
	add r1, r2, r7
	mov r7, r8
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _0810572C  @ =gUnknown_0200EC19
	add r1, r2, r0
	mov r7, r12
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _08105730  @ =gUnknown_0200ED18
	add r1, r2, r0
	mov r7, r9
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _08105734  @ =gUnknown_0200ED19
	add r1, r2, r0
	ldrb r0, [r6]
	strb r0, [r1]
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	lsl r0, r5, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _08105688
	ldr r2, _08105738  @ =0x00000F62
	add r1, r4, r2
	add r1, r3, r1
	ldr r7, _0810573C  @ =0x00000EE2
	add r0, r4, r7
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08105740  @ =0x00000F72
	add r1, r4, r0
	add r1, r3, r1
	sub r2, r2, #96
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r7, r7, #160
	add r1, r4, r7
	add r1, r3, r1
	sub r2, r2, #48
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r7, _08105744  @ =0x000010A2
	add r1, r4, r7
	add r1, r3, r1
	add r2, r2, #32
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105710:
	.4byte gUnknown_0817BE90
_08105714:
	.4byte gRam
_08105718:
	.4byte 0x00001622
_0810571C:
	.4byte 0x00001623
_08105720:
	.4byte 0x00001624
_08105724:
	.4byte 0x00001625
_08105728:
	.4byte gUnknown_0200EC18
_0810572C:
	.4byte gUnknown_0200EC19
_08105730:
	.4byte gUnknown_0200ED18
_08105734:
	.4byte gUnknown_0200ED19
_08105738:
	.4byte 0x00000F62
_0810573C:
	.4byte 0x00000EE2
_08105740:
	.4byte 0x00000F72
_08105744:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_0810565C

