	THUMB_FUNC_START sub_08055BDC
sub_08055BDC: @ 0x08055BDC
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, _08055C6C  @ =gUnknown_0201F000
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #1
	add r1, r3, #0
	lsl r1, r1, r2
	ldr r2, [r0]
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08055C64
	ldr r0, _08055C6C  @ =gUnknown_0201F000
	ldr r1, _08055C6C  @ =gUnknown_0201F000
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldr r1, [r1, #16]
	orr r2, r2, r1
	str r2, [r0, #16]
	ldr r0, [r7]
	bl sub_0804C9C8
	ldr r4, _08055C70  @ =gUnknown_08428DF8
	ldr r0, _08055C6C  @ =gUnknown_0201F000
	ldr r1, _08055C74  @ =gUnknown_08428DE8
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	lsr r2, r3, #2
	add r5, r2, #0
	lsl r3, r5, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r0, [r0, #16]
	ldr r2, [r1]
	add r1, r0, #0
	and r1, r1, r2
	add r0, r1, #0
	bl sub_08000A40
	lsl r1, r0, #24
	lsr r0, r1, #24
	add r1, r4, r0
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804CABC
	ldr r0, [r7]
	bl DeleteThisEntity
_08055C64:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_08055C6C:
	.4byte gUnknown_0201F000
_08055C70:
	.4byte gUnknown_08428DF8
_08055C74:
	.4byte gUnknown_08428DE8
	THUMB_FUNC_END sub_08055BDC

