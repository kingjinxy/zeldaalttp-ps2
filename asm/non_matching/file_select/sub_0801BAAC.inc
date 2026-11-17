	THUMB_FUNC_START sub_0801BAAC
sub_0801BAAC: @ 0x0801BAAC
	push {lr}
	add r3, r0, #0
	mov r0, #16
	strb r0, [r3, #23]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldrh r1, [r3, #50]
	add r0, r3, #0
	add r0, r0, #112
	strh r1, [r0]
	ldrh r1, [r3, #54]
	add r0, r0, #2
	strh r1, [r0]
	mov r0, #92
	bl sub_08003DFC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BAAC

