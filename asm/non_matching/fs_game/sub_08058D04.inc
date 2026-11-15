	THUMB_FUNC_START sub_08058D04
sub_08058D04: @ 0x08058D04
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	mov r0, #50
	mov r1, #1
	mov r2, #0
	bl sub_0804C938
	mov r0, #50
	mov r1, #3
	mov r2, #0
	bl sub_0804C938
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08058D24:
	add r0, r7, #0
	ldr r1, _08058D34  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08058D38
	b _08058D84
	.byte 0x00
	.byte 0x00
_08058D34:
	.4byte gUnknown_03006C80
_08058D38:
	add r0, r7, #0
	ldrb r2, [r0]
	mov r0, #50
	mov r1, #2
	bl sub_0804C938
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08058D70
	add r0, r7, #0
	ldr r1, _08058D80  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08058D70
	mov r0, #50
	mov r1, #0
	mov r2, #0
	bl sub_0804C938
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08058D70
	ldr r0, [r7, #8]
	ldr r1, [r7, #4]
	str r1, [r0, #88]
_08058D70:
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08058D24
_08058D80:
	.4byte gLCDRegisterBuffer
_08058D84:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08058D04

