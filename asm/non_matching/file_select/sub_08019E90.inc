	THUMB_FUNC_START sub_08019E90
sub_08019E90: @ 0x08019E90
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #56]
	ldr r1, _08019EC0  @ =0xFFFF5000
	add r0, r0, r1
	str r0, [r2, #56]
	mov r0, #58
	ldrsh r1, [r2, r0]
	mov r0, #88
	neg r0, r0
	cmp r1, r0
	bne _08019EB6
	mov r0, #11
	strb r0, [r2, #20]
	add r1, r2, #0
	add r1, r1, #112
	mov r0, #240
	lsl r0, r0, #1
	strh r0, [r1]
_08019EB6:
	add r0, r2, #0
	bl GetNextFrame
	pop {r0}
	bx r0
_08019EC0:
	.4byte 0xFFFF5000
	THUMB_FUNC_END sub_08019E90

