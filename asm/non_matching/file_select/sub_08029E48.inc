	THUMB_FUNC_START sub_08029E48
sub_08029E48: @ 0x08029E48
	push {r4,r5,lr}
	add r5, r0, #0
	bl GetNextFrame
	add r0, r5, #0
	bl sub_08002E64
	mov r1, #128
	lsl r1, r1, #6
	add r0, r5, #0
	bl sub_08003594
	cmp r0, #0
	bne _08029EDA
	ldrb r0, [r5, #10]
	cmp r0, #3
	bhi _08029E70
	mov r0, #167
	bl sub_08003DFC
_08029E70:
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08029ED4
	ldrb r0, [r5, #10]
	cmp r0, #4
	bne _08029E88
	mov r0, #49
	bl sub_08003DFC
_08029E88:
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r5, #16]
	add r0, r5, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #0
	bne _08029EA2
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	b _08029EBE
_08029EA2:
	ldr r4, _08029ED0  @ =gUnknown_03006A30
	bl sub_08003170
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r1, [r1]
	add r0, r5, #0
	bl sub_08003F4C
_08029EBE:
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrh r1, [r5, #50]
	ldrh r2, [r5, #54]
	add r0, r5, #0
	bl sub_0802A134
	b _08029EDA
_08029ED0:
	.4byte gUnknown_03006A30
_08029ED4:
	add r0, r5, #0
	bl sub_0802A0A8
_08029EDA:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08029E48

