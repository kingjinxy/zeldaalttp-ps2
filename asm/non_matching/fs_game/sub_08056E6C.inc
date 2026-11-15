	THUMB_FUNC_START sub_08056E6C
sub_08056E6C: @ 0x08056E6C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08056E84  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #3
	beq _08056E88
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08056EEC
_08056E84:
	.4byte gSubState
_08056E88:
	ldr r1, [r7]
	ldrb r0, [r1, #20]
	cmp r0, #4
	bhi _08056EE6
	lsl r1, r0, #2
	ldr r2, _08056E9C  @ =0x08056EA0
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_08056E9C:
	.4byte 0x08056EA0
	.4byte _08056EB4
	.4byte _08056EBE
	.4byte _08056EC8
	.4byte _08056ED2
	.4byte _08056EDC
_08056EB4:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08056DCC
	b _08056EEC
_08056EBE:
	ldr r0, [r7]
	mov r1, #1
	bl sub_08056DCC
	b _08056EEC
_08056EC8:
	ldr r0, [r7]
	mov r1, #2
	bl sub_08056DCC
	b _08056EEC
_08056ED2:
	ldr r0, [r7]
	mov r1, #1
	bl sub_08056DCC
	b _08056EEC
_08056EDC:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08056DCC
	b _08056EEC
_08056EE6:
	ldr r0, [r7]
	bl DeleteThisEntity
_08056EEC:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08056E6C

