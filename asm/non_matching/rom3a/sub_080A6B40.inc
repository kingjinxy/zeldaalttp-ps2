	.ALIGN 2, 0
	.GLOBAL sub_080A6B40
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080A6B40, function
sub_080A6B40:
push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #127
	bls _080A6B52
	mov r2, #255
	lsl r2, r2, #8
	add r0, r2, #0
	orr r1, r1, r0
_080A6B52:
	ldr r2, _080A6B78  @ =gRam
	ldr r3, _080A6B7C  @ =0x000016C4
	add r0, r2, r3
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r3, _080A6B80  @ =0x00000952
	add r1, r2, r3
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #24
	mov r1, #1
	and r0, r0, r1
	ldr r1, _080A6B84  @ =0x00001892
	add r2, r2, r1
	strh r0, [r2]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A6B78:
	.4byte gRam
_080A6B7C:
	.4byte 0x000016C4
_080A6B80:
	.4byte 0x00000952
_080A6B84:
	.4byte 0x00001892
