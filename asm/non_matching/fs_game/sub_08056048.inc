	THUMB_FUNC_START sub_08056048
sub_08056048: @ 0x08056048
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805609C  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #3
	bne _08056094
	bl sub_0800099C
	mov r1, #127
	and r0, r0, r1
	cmp r0, #0
	bne _0805607E
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	mov r0, #40
	mov r1, #9
	bl sub_0804C8A8
_0805607E:
	bl sub_0800099C
	mov r1, #255
	and r0, r0, r1
	cmp r0, #0
	bne _08056094
	mov r0, #40
	mov r1, #10
	mov r2, #0
	bl sub_0804C8A8
_08056094:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805609C:
	.4byte gSubState
	THUMB_FUNC_END sub_08056048

