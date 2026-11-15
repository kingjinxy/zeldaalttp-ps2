	THUMB_FUNC_START sub_080745DC
sub_080745DC: @ 0x080745DC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r5, _0807460C  @ =gRam
	ldr r0, _08074610  @ =0x000009AC
	add r6, r5, r0
	ldrb r0, [r6]
	mov r8, r0
	ldr r0, _08074614  @ =0x000009AD
	add r5, r5, r0
	ldrb r4, [r5]
	bl sub_08078274
	bl sub_08074400
	add r4, r4, #1
	strb r4, [r5]
	mov r0, r8
	strb r0, [r6]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_0807460C:
	.4byte gRam
_08074610:
	.4byte 0x000009AC
_08074614:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080745DC

