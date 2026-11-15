	THUMB_FUNC_START sub_0801F12C
sub_0801F12C: @ 0x0801F12C
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #33
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _0801F160
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	add r0, r5, #0
	add r0, r0, #112
	ldrh r0, [r0]
	mov r1, #0
	strh r0, [r4, #50]
	add r0, r5, #0
	add r0, r0, #114
	ldrh r0, [r0]
	strh r0, [r4, #54]
	strh r1, [r4, #58]
	add r1, r4, #0
	add r1, r1, #116
	ldr r0, _0801F16C  @ =0x0000023A
	strh r0, [r1]
_0801F160:
	add r0, r5, #0
	bl sub_08043F20
	pop {r4,r5}
	pop {r0}
	bx r0
_0801F16C:
	.4byte 0x0000023A
	THUMB_FUNC_END sub_0801F12C

