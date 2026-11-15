	THUMB_FUNC_START sub_0803306C
sub_0803306C: @ 0x0803306C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_08037554
	cmp r0, #0
	beq _08033138
	mov r2, #0
	ldr r0, _08033148  @ =gHeldKeys
	mov r9, r0
	ldr r0, _0803314C  @ =gNewKeys
	mov r12, r0
	ldr r0, _08033150  @ =gUnknown_03000494
	mov r8, r0
	ldr r0, _08033154  @ =gLCDRegisterBuffer
	mov r10, r0
	ldr r7, _08033158  @ =gUnknown_03000E20
	ldr r5, _0803315C  @ =gUnknown_03000940
	ldr r4, _08033160  @ =gUnknown_03005E10
	mov r3, #0
_08033098:
	lsl r0, r2, #1
	add r1, r0, r5
	add r0, r0, r4
	strh r3, [r0]
	strh r3, [r1]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #3
	bls _08033098
	mov r6, #0
	mov r2, r12
	strh r6, [r2]
	mov r0, r9
	strh r6, [r0]
	mov r2, r8
	ldr r1, [r2]
	mov r0, #15
	and r1, r1, r0
	lsl r1, r1, #1
	mov r2, r10
	ldrb r0, [r2]
	lsl r0, r0, #5
	add r1, r1, r0
	ldr r0, _08033164  @ =gUnknown_0200B1D0
	add r1, r1, r0
	mov r0, #0
	strh r0, [r1]
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	ldrh r0, [r7, #2]
	sub r0, r0, #1
	strh r0, [r7, #2]
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	bne _08033118
	ldr r4, _08033168  @ =gUnknown_03006C80
	ldr r3, _0803316C  @ =gUnknown_03000C00
	ldr r2, _08033170  @ =gUnknown_03006D14
	ldr r1, _08033174  @ =gUnknown_03000FC0
	add r0, r1, #0
	add r0, r0, #36
	strb r6, [r0]
	strb r6, [r1, #16]
	strh r5, [r2]
	strb r6, [r3]
	str r5, [r4, #28]
	strh r5, [r7]
	bl sub_0800D6F4
	bl sub_0800D744
	ldr r0, _08033178  @ =gUnknown_02016D60
	mov r1, #40
	bl zero_memory
	ldr r1, _0803317C  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08033180  @ =gSubState
	strb r6, [r0]
_08033118:
	ldr r0, _08033184  @ =gUnknown_03006C70
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
	bl sub_08000BAC
	bl sub_0802BFC4
	bl sub_08037574
_08033138:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033148:
	.4byte gHeldKeys
_0803314C:
	.4byte gNewKeys
_08033150:
	.4byte gUnknown_03000494
_08033154:
	.4byte gLCDRegisterBuffer
_08033158:
	.4byte gUnknown_03000E20
_0803315C:
	.4byte gUnknown_03000940
_08033160:
	.4byte gUnknown_03005E10
_08033164:
	.4byte gUnknown_0200B1D0
_08033168:
	.4byte gUnknown_03006C80
_0803316C:
	.4byte gUnknown_03000C00
_08033170:
	.4byte gUnknown_03006D14
_08033174:
	.4byte gUnknown_03000FC0
_08033178:
	.4byte gUnknown_02016D60
_0803317C:
	.4byte gUnknown_03005050
_08033180:
	.4byte gSubState
_08033184:
	.4byte gUnknown_03006C70
	THUMB_FUNC_END sub_0803306C

