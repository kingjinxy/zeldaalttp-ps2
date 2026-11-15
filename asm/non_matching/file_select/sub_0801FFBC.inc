	THUMB_FUNC_START sub_0801FFBC
sub_0801FFBC: @ 0x0801FFBC
	add r2, r0, #0
	add r0, r0, #42
	ldrb r0, [r0]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #1
	beq _0801FFF0
	cmp r1, #1
	bgt _0801FFD4
	cmp r1, #0
	beq _0801FFDE
	b _08020026
_0801FFD4:
	cmp r1, #2
	beq _0801FFF8
	cmp r1, #3
	beq _08020010
	b _08020026
_0801FFDE:
	ldr r0, [r2, #100]
	ldrh r1, [r0, #50]
	add r0, r2, #0
	add r0, r0, #124
	strh r1, [r0]
	ldr r0, [r2, #100]
	ldrh r0, [r0, #54]
	add r0, r0, #56
	b _08020008
_0801FFF0:
	ldr r0, [r2, #100]
	ldrh r0, [r0, #50]
	sub r0, r0, #56
	b _08020016
_0801FFF8:
	ldr r0, [r2, #100]
	ldrh r1, [r0, #50]
	add r0, r2, #0
	add r0, r0, #124
	strh r1, [r0]
	ldr r0, [r2, #100]
	ldrh r0, [r0, #54]
	sub r0, r0, #56
_08020008:
	add r1, r2, #0
	add r1, r1, #126
	strh r0, [r1]
	b _08020026
_08020010:
	ldr r0, [r2, #100]
	ldrh r0, [r0, #50]
	add r0, r0, #56
_08020016:
	add r1, r2, #0
	add r1, r1, #124
	strh r0, [r1]
	ldr r0, [r2, #100]
	ldrh r1, [r0, #54]
	add r0, r2, #0
	add r0, r0, #126
	strh r1, [r0]
_08020026:
	bx lr
	THUMB_FUNC_END sub_0801FFBC

