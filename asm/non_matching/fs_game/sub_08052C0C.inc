	THUMB_FUNC_START sub_08052C0C
sub_08052C0C: @ 0x08052C0C
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	mov r0, #0
	str r0, [r7, #4]
_08052C18:
	ldr r0, [r7, #4]
	cmp r0, #3
	ble _08052C20
	b _08052C3C
_08052C20:
	ldr r0, _08052C38  @ =gUnknown_03006C80
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, #112
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08052C18
_08052C38:
	.4byte gUnknown_03006C80
_08052C3C:
	mov r0, #0
	str r0, [r7, #8]
	mov r0, #0
	str r0, [r7, #4]
_08052C44:
	ldr r0, _08052C50  @ =gUnknown_03006C80
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	blt _08052C54
	b _08052CC0
_08052C50:
	.4byte gUnknown_03006C80
_08052C54:
	ldr r0, _08052CB8  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	beq _08052CAE
	ldr r1, [r7, #4]
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r0, #16
	mov r1, #1
	bl sub_0804C8A8
	str r0, [r7, #12]
	ldr r0, [r7, #12]
	cmp r0, #0
	beq _08052CAE
	ldr r0, [r7, #12]
	ldr r1, [r7]
	str r1, [r0, #84]
	ldr r0, [r7, #12]
	ldr r1, _08052CBC  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	str r1, [r0, #88]
	ldr r2, [r7, #12]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r0]
	add r3, r1, #0
	ldrb r4, [r2, #24]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2, #24]
	add r1, r1, #1
	str r1, [r0]
_08052CAE:
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08052C44
	.byte 0x00
	.byte 0x00
_08052CB8:
	.4byte gLCDRegisterBuffer
_08052CBC:
	.4byte gUnknown_03006A30
_08052CC0:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08052C0C

	.byte 0x00
	.byte 0x00
