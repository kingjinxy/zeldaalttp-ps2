	THUMB_FUNC_START sub_080D96A0
sub_080D96A0: @ 0x080D96A0
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #0
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	blt _080D9730
	ldr r2, _080D9738  @ =gRam
	ldr r0, _080D973C  @ =0x00000CA2
	add r1, r2, r0
	mov r0, #11
	strh r0, [r1]
	ldr r1, _080D9740  @ =0x00000FA2
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #4
	strb r1, [r0]
	ldr r4, _080D9744  @ =0x00001012
	add r0, r2, r4
	add r0, r3, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080D9748  @ =0x00001122
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #12
	strb r1, [r0]
	ldr r4, _080D974C  @ =0x00000EE2
	add r0, r2, r4
	add r0, r3, r0
	ldr r4, _080D9750  @ =0x00001622
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D9754  @ =0x00000F02
	add r0, r2, r1
	add r0, r3, r0
	add r4, r4, #1
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D9758  @ =0x00000ED2
	add r0, r2, r1
	add r0, r3, r0
	add r4, r4, #1
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D975C  @ =0x00000EF2
	add r0, r2, r1
	add r0, r3, r0
	add r4, r4, #1
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D9760  @ =0x00000FC2
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #31
	strb r1, [r0]
	ldr r4, _080D9764  @ =0x00000F62
	add r0, r2, r4
	add r0, r3, r0
	strb r1, [r0]
	ldr r0, _080D9768  @ =0x000010F2
	add r2, r2, r0
	add r2, r3, r2
	mov r0, #2
	strb r0, [r2]
_080D9730:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9738:
	.4byte gRam
_080D973C:
	.4byte 0x00000CA2
_080D9740:
	.4byte 0x00000FA2
_080D9744:
	.4byte 0x00001012
_080D9748:
	.4byte 0x00001122
_080D974C:
	.4byte 0x00000EE2
_080D9750:
	.4byte 0x00001622
_080D9754:
	.4byte 0x00000F02
_080D9758:
	.4byte 0x00000ED2
_080D975C:
	.4byte 0x00000EF2
_080D9760:
	.4byte 0x00000FC2
_080D9764:
	.4byte 0x00000F62
_080D9768:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080D96A0

