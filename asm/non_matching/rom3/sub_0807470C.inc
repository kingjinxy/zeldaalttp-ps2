	THUMB_FUNC_START sub_0807470C
sub_0807470C: @ 0x0807470C
	push {lr}
	bl sub_080783D8
	ldr r1, _08074730  @ =gRam
	ldr r0, _08074734  @ =0x000009AC
	add r2, r1, r0
	mov r3, #0
	mov r0, #9
	strb r0, [r2]
	ldr r0, _08074738  @ =0x000009AD
	add r2, r1, r0
	mov r0, #15
	strb r0, [r2]
	ldr r0, _0807473C  @ =0x000009E8
	add r1, r1, r0
	strh r3, [r1]
	pop {r0}
	bx r0
_08074730:
	.4byte gRam
_08074734:
	.4byte 0x000009AC
_08074738:
	.4byte 0x000009AD
_0807473C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0807470C

